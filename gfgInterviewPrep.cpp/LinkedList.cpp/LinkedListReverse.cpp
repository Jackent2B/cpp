#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link; 
};

//declaring head as global
node* head;

void reverse(){

	node *prev, *current, *next;

	prev = NULL;
	current = head;
		
	while(current != NULL){
		next=current->link;
		current->link = prev;
		prev = current;
		current = next;
	}
		
	head = prev;

}


void insert(int x, int n){
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
	reverse();
	print();
}