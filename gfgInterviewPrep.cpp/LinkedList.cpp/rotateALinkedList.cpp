#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head;

struct node* RotatedLinkedList(int k){

if (k == 0)  
    return head;  
    
    node* current = head;  
    int count = 1;  
    while (count < k && current != NULL)  
    {  
        current = current->next;  
        count++;  
    }  
 
    if (current == NULL)  
        return head;  

    node *kthnode = current;  
 
    while (current->next != NULL)  
        current = current->next;  
 
    current->next = head;  
    head = kthnode->next;  
  
    kthnode->next = NULL;  
    return head;

}

void print(node* new_head){
	node* temp = head;
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp = temp->next; 
	}
}

void insert(int x){
	node* newnode = new node();
	newnode->data = x;
	newnode->next = NULL;

	node* temp;
	temp=head;

	 if (head == NULL) 
    { 
       head= newnode; 
       return; 
    } 
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
	return;
}

int main(){
	
	head = NULL;
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
    print(head);
	int k; //position
	cin >> k;

	node* new_head = RotatedLinkedList(k);
	print(new_head);
}