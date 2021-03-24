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

//Reference : Vivekananda sprial traversal 
void printSpiral(Node *root)
{
	//make two stacks
	stack <struct Node*> s1;
	stack <struct Node*> s2;

	if(root==NULL)
		return;

	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			Node* current1 = s1.top();
			s1.pop();
			cout<<current1->data<<" ";

            if(current1->right) s2.push(current1->right);
			if(current1->left) s2.push(current1->left);
			
				
		}
		while(!s2.empty()){
			Node* current2 = s2.top();
			s2.pop();
			cout<<current2->data<<" ";

			if(current2->left) s1.push(current2->left);
            if(current2->right) s1.push(current2->right);
		}
	}
	return;
}



int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"Level Order traversal"<<endl;
	spiralLevelOrder(root);
    cout<<endl;

	cout<<endl;
	return 0;
}