#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link; 
};

void insert(node* head,int x){
	node* temp = new node();
	temp->data = x;
	//newly created temp->link will point to the 
	//value present in the HEAD.
	temp->link = head;
	head = temp;
};

void print(node* head){
	node* temp = head;
	while(temp!= NULL){
		printf("%d",temp->data);
		temp = temp->link; 
	}
}

node* mergingList(node*head1,node* head2,node* sorting){

	node* p = head1;
	node* q = head2;

	node *head3;
	
	if(p == NULL)
		return q;
	if(q == NULL)
		return p;
	
	if(p && q)
	{
		if(p->data <= q->data)
		{
			sorting = p;
			p = sorting->link;
		}
		else
		{
			sorting = q;
			q = sorting->link;
		}
		
	}
	
	head3 = sorting;
	
	while(p && q)
	{
		if(p->data <= q->data)
		{
			sorting->link = p;
			sorting = p;
			p = sorting->link;
		}
		else
		{
			sorting->link = q;
			sorting = q;
			q = sorting->link;
		}
	}
	
	if(p==NULL)
	{
		sorting->link = q;
	}
	
	if(q==NULL)
	{
		sorting->link = p;
	}
	return head3;
}

int main(){
    //declaring haed as global
    node* head1 = NULL;
    node* head2 = NULL;

	node* sorting = NULL;

	int n1,n2,x;
	scanf("%d",&n1);
	for (int i = 0; i < n1; i++)
	{
		scanf("%d",&x);
		insert(head1,x);
	}
	print(head1);
	cout<<endl;

    scanf("%d",&n2);
	for (int j = 0; j < n2; j++)
	{
		scanf("%d",&x);
		insert(head2,x);
	}
	print(head2);
	cout<<endl;

	node* head3=mergingList(head1,head2,sorting);
    print(head3);

}