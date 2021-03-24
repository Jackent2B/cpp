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

void deleteNode(Node* pos){
	
	if(pos==NULL){
		cout<<"Linked list is empty"<<endl;
		return;
	}
	else if(pos->next == NULL){
		cout<<"Sorry, But we need head for ths purpose"<<endl;
		return;	
	}
	else{
		pos->data = pos->next->data;
		Node* temp = pos->next;
		pos->next = temp->next;
		free(temp);
	}


}

int main(){
	head = NULL;
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	print();
    cout<<endl;
	int x;
	cout<<"Enter the Number You want to delete "<<endl;
	cin>>x;

	Node* temp ;
	temp = head;
	while(temp->data != x){
		temp = temp->next;
	}
		
	Node* pos = temp;
	deleteNode(pos);
	print();

	return 0;
}