#include <bits/stdc++.h>
using namespace std;

struct Node{
	Node* left;
	Node* right;
	int data;
}

Node* Insert(Node* root,data){
		if(root==NULL){
		root->data = data;
		root->left = NULL;
		root->right = NULL;	
	}
	else if(data <= root->data){
		root->left = Insert(root->left,data);
	}
	else{
		root->right = Insert(root->right,data);
	}
	return root;
}

//declaring global nodes
Node* firstELEMENT;
Node* lastELEMENT;
Node* prevNode;
void fixingTwoBSTCode(Node* root){
	if(root==NULL)
		return;
	//Node* prevNode = NULL;
	Node* currentNode = root;

	fixingTwoBSTCode(root->left);

	if(prevNode !=NULL)
	{
		if(prevNode->data > currentNode->data)
		{
			if(firstELEMENT == NULL)
			{
				firstELEMENT = prevNode;
			}
		lastELEMENT = currentNode;
		}
	}
	prevNode = currentNode;
	fixingTwoBSTCode(root->right);
}

Node *correctBST(Node* root )
{
    // add code here.
    fixingTwoBSTCode(root);
	//swapping
	int x = firstELEMENT->data;
	firstELEMENT->data = lastELEMENT->data;
	lastELEMENT->data = x;
	return root;
}



int main(){
	Node* root = NULL;
	root = Insert(root,9); 
	root = Insert(root,5);
	root = Insert(root,10);
	root = Insert(root,4); 
	root = Insert(root,3); 
	root = Insert(root,14);
	return 0;
}