#include <bits/stdc++.h>
using namespace std;
int cnt = 0; //global variable

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

int countLeaves(Node* root)
{
  // Your code here
  if(root == NULL)
    return 0;
  if(root->left == NULL && root->right == NULL)
    return 1;
  else
    return countLeaves(root->left)+countLeaves(root->right);
}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);
	countLeafNodes(root);
	cout<<"count of leaf nodes is "<<countLeaves(root)<<endl;
	
	cout<<endl;
	return 0;
}