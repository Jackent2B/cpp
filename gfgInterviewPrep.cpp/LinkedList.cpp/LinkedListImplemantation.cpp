#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head;

void insert(int x){
	Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
    
    Node* temp;
	temp = head;
    
    if(head == NULL){
        head = newNode;
        return;
    }

	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	return;
}

void print(){
	Node* temp ;
	temp = head;

	while(temp != NULL){
		cout<< temp->data << " ";
		temp = temp->next;
	}
}

int main(){
	head = NULL;
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	print();
	return 0;
}