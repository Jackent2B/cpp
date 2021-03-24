#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head;

void getMidElement(int n){
	int it = 0;
	it=(n/2)+1;


	node* temp;
	temp=head;
	for (int a = 0; a < it-1; a++)
		temp = temp->next;	
	cout<< temp->data <<endl;

}

void print(){
	node* temp = head;
	while(temp!= NULL){
		printf("%d",temp->data);
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
	int t,n,x;
	cin>>t;
	head = NULL;
	for (int i = 0; i < t; i++)
	{
		cin>>n;
		for (int j = 0; j < n; j++)
		{
			cin>>x;
			insert(x);
		}
		print();
		printf("\n");
	getMidElement(n);
	}
}