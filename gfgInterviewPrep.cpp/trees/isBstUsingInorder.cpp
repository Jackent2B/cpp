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

int prvs = INT_MIN;

bool isBst(Node* root){
    
    if (root==NULL) return true;
    if (isBst(root->left)==false) return false;

    if (root->data <= prvs) return false;
    prvs = root->data;

    return isBst(root->right);

 }


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    if(isBst(root))
        cout<<"true";
    else
        cout<<"false";
    
    cout<<endl;
    return 0;
}