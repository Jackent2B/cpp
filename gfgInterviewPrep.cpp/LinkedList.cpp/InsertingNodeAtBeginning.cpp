#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link; 
};

//declaring haed as global
node* head;

void insert(int x){
	node* temp = new node();
	temp->data = x;
	//newly created temp->link will point to the 
	//value present in the HEAD.
	temp->link = head;
	head = temp;
};

void print(){
	node* temp = head;
	while(temp!= NULL){
		printf("%d",temp->data);
		temp = temp->link; 
	}
}

int main(){
	head = NULL;
	printf("How many numbers");
	int n,x;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter the number");
		scanf("%d",&x);
		insert(x);
		print();
	}

}