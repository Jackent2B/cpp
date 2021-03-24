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

//reference: vivekanand khyade youtube video

struct Node* pairwiseSwap(){
 	Node *p,*new_start;
	p = head;
	new_start = p->next;

	Node *q,*temp;
	while(1){
		q = p->next;
		temp = q->next;
		q->next = p;
		//if linked list has even nodes || linked list has odd nodes
		if (temp==NULL || temp->next == NULL)
		{
			p->next = temp;
			break;
		}
		p->next = temp->next;
		p=temp;
	}
	
    return new_start;
}

void print(Node* head){
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
	print(head);
	cout<<endl;
	Node* new_head = pairwiseSwap();
	print(new_head);
	return 0;
}