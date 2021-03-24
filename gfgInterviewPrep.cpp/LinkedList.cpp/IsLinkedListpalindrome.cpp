#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link; 
};

//declaring haed as global
node* head;

bool ispalndrome(){
	//using stack
	stack <int> s;

	node* temp = head;
	while(temp != NULL){
		s.push(temp->data);
		temp=temp->link;
	}

	temp = head;

	while(temp != NULL){
		int top = s.top();
		s.pop();
		if (temp->data != top)
			return false;
		else
			temp = temp->link;
	}
	return true;
}

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
	int n,x;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&x);
		insert(x);
	}
	print();
	cout<<"\n";
	if(ispalndrome())
		cout<<"Yes!Its a palindrome";
	else
		cout<<"No!It's not a palindrome";

}