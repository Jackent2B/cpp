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

/* Returns true if the given
tree is a BST and its values
are >= min and <= max. */
int isBSTUtil(Node* node, int min, int max) 
{ 
    /* an empty tree is BST */
    if (node==NULL) 
        return 1; 
            
    /* false if this node violates
    the min/max constraint */
    if (node->data < min || node->data > max) 
        return 0; 
    
    /* otherwise check the subtrees recursively, 
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values 
        isBSTUtil(node->right, node->data+1, max); // Allow only distinct values 
} 

/* Returns true if the given 
tree is a binary search tree 
(efficient version). */
int isBST(Node* node) 
{ 
    return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 


int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	if(isBST(root))
		cout<<"true";
	else
		cout<<"false";
	
	cout<<endl;
	return 0;
}