#include <iostream>
using namespace std;

struct Node { 
   int data; 
   Node *next; 
}; 
Node* head = NULL; 
Node* tail = NULL; 

void insert(int newdata) { 
   Node *newNode = new Node();

   newNode->data = newdata; 
   newNode->next = NULL;

   if (head== NULL) { 
      head = newNode;
      tail = newNode; 
   } else
      {
         tail->next = newNode;
         tail = newNode;
         tail->next = head;
      }
}

void deletionFromBegin(){
   Node* temp;
   temp = head;
   head = head->next;
   tail->next = head; 
   temp->next = NULL;
   free(temp);
}

void deletionFromEnd(){
   Node* temp;
   temp = head;
   while(temp->next != tail){
      temp = temp->next;
   }
   temp->next = head;
   //or temp->next = tail->next;
   tail->next = NULL; 
   free(tail);
   tail = temp;
}

void display() { 
   Node* temp;
   temp = head;
   while(temp->next != head){
      printf("%d",temp->data);
      temp = temp->next;
   }
   //printing the last element
   printf("%d",temp->data);
   printf("\n");
}

int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);  
   cout<<"The circular linked list is: ";
   display();
   deletionFromBegin();
   display();
   deletionFromEnd();
   display(); 
   return 0; 
} 