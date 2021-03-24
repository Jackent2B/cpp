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

//Reference : Level Order traversal MY Code School
void rightView(Node* root){

		if (root == NULL) 
			return;

		Node* current;
		queue <Node*> q;
		q.push(root);

		while(!q.empty()){
			int len = q.size();
			for (int i = 0; i <len; i++)
			{
			current = q.front();

			//condition to print only last element of each level
			if(i==len-1) cout << current->data<<" ";
			
			if (current->left != NULL) q.push(current->left);
			if (current->right != NULL) q.push(current->right);
			q.pop();
			}
		}
}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"Right view traversal"<<endl;
	rightView(root);
    cout<<endl;

	cout<<endl;
	return 0;
}