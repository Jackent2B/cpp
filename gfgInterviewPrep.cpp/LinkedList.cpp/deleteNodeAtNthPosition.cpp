#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link; 
};

//declaring head as global
node* head;

void insert(int x,int n){
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
	if (n==1)
	{
		temp->link = head;
		head = temp;
		return;
	}
	
	node* temp1 = head;

	//we have chosen n-2 because we have to move till n-1th node only.
	for (int i = 0; i < n-2; i++)
		temp1 = temp1->link;

	//newly created node should point to nth node
	temp->link = temp1->link;

	//n-1th element should point to newly created node. 
	temp1->link = temp;
};

void deletenode(int n){

	node* temp1 = head;
	if (n==1)
	{
		head = temp1->link; //head now points to second node.
		free(temp1);
		return;
	}

	//we have chosen n-2 because we have to move till n-1th node only.
	for (int i = 0; i < n-2; i++)
		temp1 = temp1->link;

	//Now,temp1 pointing to (n-1)th node. 

	node* temp2;
	temp2 = temp1->link;   //temp2 pointing to (n)th node.
	temp1->link = temp2->link; // (n+1)th node.
	free(temp2);
};


void print(){
	node* temp = head;
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp = temp->link; 
	}
}

int main(){
	head = NULL;
	insert(2,1); //2
	insert(3,2); //2,3
	insert(4,1); //4,2,3 
	insert(5,2); //4,5,2,3
	print();
	printf("\n");
	deletenode(2);
	print();	
}