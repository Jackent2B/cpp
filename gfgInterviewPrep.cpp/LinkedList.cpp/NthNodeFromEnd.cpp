#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head;

int NthNodeFromLast(int n){

	node* temp, *temp1;
	temp=head;
	temp1 = head;
    
    int count = 0;
    while(temp1 != NULL){
        count++;
        temp1 = temp1->next;
    }
    
    if(n>count)
        return -1;
    
	for (int a = 0; a < count-n; a++)
		temp = temp->next;
			
	return temp->data;

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
	int t,nodes,x;
	int n; //nth elemnet from last 
	cin>>t;
	head = NULL;
	for (int i = 0; i < t; i++)
	{
		cin>>nodes;
		for (int j = 0; j < nodes; j++)
		{
			cin>>x;
			insert(x);
		}
		cin>>n;
		print();
		printf("\n");
		cout<<NthNodeFromLast(n)<<endl;
	}
}