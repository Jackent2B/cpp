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
void topViewOrder(Node* root) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Create a map and store vertical oder  
    map < int,vector<int> > m; 
    int hd = 0; 
  
    // Create queue to do level order traversal. 
    // Every item of queue contains node and 
    // horizontal distance. 
    queue<pair<Node*, int> > que; 
 
    que.push(make_pair(root, hd)); 
  
     while (!que.empty()) 
     { 
        // pop from queue front 
        pair<Node *,int> temp = que.front(); 
        que.pop(); 
        hd = temp.second; 
        Node* node = temp.first; 
  
        // insert this node's data in vector of hash 
        m[hd].push_back(node->data); 
  
        if (node->left != NULL) 
            que.push(make_pair(node->left, hd-1)); 
        if (node->right != NULL) 
            que.push(make_pair(node->right, hd+1)); 
    } 
  
    // Traverse the map and print nodes at 
    // every horigontal distance (hd) 
    map< int,vector<int> > :: iterator it; 
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        for (int i=0; i<it->second.size(); ++i){
            //printing only the first element of vector with distinct hd
            if(i==0) {cout << it->second[i] << " ";break;} 
        }
        // cout << endl; 
    } 
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Top view traversal"<<endl;
    topViewOrder(root);
    cout<<endl;

    cout<<endl;
    return 0;
}