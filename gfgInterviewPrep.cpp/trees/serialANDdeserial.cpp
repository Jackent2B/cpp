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

void serialize(Node* root,vector<int> &A){
	if(root==NULL)
		A.push_back(-1);

	A.push_back(root->data);
	serialize(root->left,A);
	serialize(root->right,A);
}

int idx = 0;
Node* deserialize(vector<int> &A){
	if(idx == A.size() || A[idx] == -1){
		idx = idx+1; return NULL;
	}

	Node* root = new Node(A[idx]);
	idx = idx+1;

	root->left = deserialize(A);
	root->right=deserialize(A);
	return root;

}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	vector <int> A;
	serialize(root,A);
	Node* nd = deserialize(A);
	
	cout << nd->data;
	return 0;
}