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

void insertAtN(int newdata, int n) { 
   Node *newNode = new Node();
   Node* temp;
   temp = head;
   newNode->data = newdata;
   //we need to reach n-1;
   for (int i = 0; i < n-1; ++i)
      temp = temp->next;

   newNode->next = temp->next ; //nth 
   temp->next = newNode;
}


void insertAtBegin(int newdata) { 
   Node *newNode = new Node();

   newNode->data = newdata; 
   newNode->next = head;
   
   // Node* temp;
   // temp = head;

   // while(temp->next != head){
   //    temp=temp->next;
   // }
   //or
   tail->next = newNode;
   //temp->next = newNode;
   head = newNode;

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
   insertAtN(11,3);
   insertAtBegin(5);
   insert(9);  
   cout<<"The circular linked list is: ";
   display(); 
   return 0; 
} 