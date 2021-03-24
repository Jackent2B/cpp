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

int addBT(Node* root) 
{ 
    if (root == NULL) 
        return 0; 
    return (root->data + addBT(root->left) + addBT(root->right)); 
}

//Reference :  MY Code School
bool isSumTree(Node* root){

	if (root == NULL) 
		return true;

	if (root->left == NULL && root->right==NULL) 
		return true;

	int leftSum = addBT(root->left);
	int rightSum = addBT(root->right);

	if( (leftSum+rightSum) == root->data && isSumTree(root->left) && isSumTree(root->right))
		return true;

	return false;
}

int main(){
	Node* root = new Node(21);
	root->left = new Node(9);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	if(isSumTree(root))
	    cout<<"true";
	else
	    cout<<"false";

	cout<<endl;
	return 0;
}