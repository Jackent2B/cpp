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

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"Sum of all Nodes of Binary Tree is "<<addBT(root)<<endl;
	
	cout<<endl;
	return 0;
}