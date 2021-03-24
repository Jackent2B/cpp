#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    }
};


Node* head = NULL;
Node* prv = NULL;

//code starts
void treeToDLL(Node* p){
	if(p==NULL)
		return;
	treeToDLL(p->left);

	if(prv==NULL)
		head = p;
	else{
		p->left = prv;
		prv->right = p;
	}		
	prv = p;
	treeToDLL(p->right)
;}
// This function should return head to the DLL
Node * bToDLL(Node *root)
{
    // your code here
    head = NULL;
    prv = NULL;
    treeToDLL(root);
    return root;
}
//code ends

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	Node* r = bToDLL(root);

	cout<<r->data<<endl;
	return 0;
}