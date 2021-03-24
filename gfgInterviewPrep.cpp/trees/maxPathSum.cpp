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


int maxPathSum(Node* root){

		if (root == NULL) 
			return 0;

		//to find no.of nodes in height
		//if (root == NULL) 
		//	return 0;

		int leftsum = maxPathSum(root->left);
		int rightsum = maxPathSum(root->right);		

		return max((leftsum+rightsum+root->data),max(leftsum,rightsum)+root->data);
}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->left->left = new Node(8);
	root->left->left->left->left = new Node(9);
	root->left->right = new Node(5);

	cout<<maxPathSum(root)<<endl;
	
	cout<<endl;
	return 0;
}