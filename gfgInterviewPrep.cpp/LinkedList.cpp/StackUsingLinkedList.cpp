
#include <bits/stdc++.h>  
using namespace std; 
 
struct Node { 
    int data; 
    struct Node* link; 
}; 
struct Node* top; 
  
void push(int data) 
{ 
    struct Node* temp; 
    temp = new Node(); 

    if (!temp) { 
        cout << "\nHeap Overflow"; 
        exit(1); 
    }   
    temp->data = data; 
    temp->link = top; 
    top = temp; 
} 
  
// Utility function to check if the stack is empty or not 
int isEmpty() 
    return top == NULL; 
  
//To return top element in a stack 
int peek() 
{  
    if (!isEmpty()) 
        return top->data; 
    else
        exit(1); 
} 
  
void pop() 
{ 
    struct Node* temp; 
    // check for stack underflow 
    if (top == NULL) { 
        cout << "\nStack Underflow" << endl; 
        exit(1); 
    } 
    else { 
        temp = top; 
        top = top->link; 
        temp->link = NULL; 
        free(temp); 
    } 
} 
  
// Function to print all the  
// elements of the stack  
void display()  
{ 
    struct Node* temp;  
    if (top == NULL) { 
        cout << "\nStack Underflow"; 
        exit(1); 
    } 
    else { 
        temp = top; 
        while (temp != NULL) {  
         cout <<  temp->data << " "; 
         temp = temp->link; 
        } 
    } 
} 
  
int main() 
{ 
    // push the elements of stack 
    push(11); 
    push(22); 
    push(33); 
    push(44); 
  
    // display stack elements 
    display(); 
  
    // print top element of stack 
    cout << "\nTop element is %d\n" <<  peek(); 
  
    // delete top elements of stack 
    pop(); 
    pop(); 
  
    // display stack elements 
    display(); 
  
    // print top element of stack 
    cout << "\nTop element is %d\n" << peek(); 
    return 0; 
  
    // This code has been contributed by Striver  
} 