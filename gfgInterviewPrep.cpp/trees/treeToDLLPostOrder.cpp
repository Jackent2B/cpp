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

void treeToDLL_BFS(Node* p){

	//static is used to make only a single copy of the variabe for the whole recurssion tree
	static Node* prev = NULL;

		if (root == NULL) 
			return;

		queue <Node*> q;
		q.push(p);
		Node* current = NULL;
		while(!q.empty()){
			current = q.front();
			Node* cur = new Node(p->data);

			if(prev==NULL)
				head = cur;
			else{
				prev->right = cur;
				cur->left = prev;
			}

			if(p->left) q.push(p->left);
			if(p->right) q.push(p->right);
				
		}
}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"Level Order traversal"<<endl;
	treeToDLL_BFS(root);
    cout<<endl;

	cout<<endl;
	return 0;
}