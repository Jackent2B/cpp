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

void display() { 
   Node* temp;
   temp = head;
   while(temp->next != head){
      printf("%d",temp->data);
      temp = temp->next;
   }
   //printing the last element
   printf("%d",temp->data);
}

int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);  
   cout<<"The circular linked list is: ";
   display(); 
   return 0; 
} 