#include <bits/stdc++.h>
using namespace std;

struct Node{
	Node* left;
	Node* right;
	int data;
	// Node(int data){
	// 	this->data = data;
	// 	left=right=NULL;
	// }
}

void preorder(Node* root){
	if(root){
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	}
	return;
}

void postorder(Node* root){
	if(root){
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	}
	return;
}

void inorder(Node* root){
	if(root){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	}
	return;
}

void levelorderTraversal(Node* root){
	if(root){
		Node* current;
		queue <int> q;
		q.push(root);
		while(!q.empty()){
			current = q.front();
			cout<<current->data<<" ";
			if(root->left) q.push(root->left);
			if(root->right) q.push(root->right);
			q.pop();
		}
	}
	return;
}

void reverselevelorderTraversal(Node* root){
	vector <int> v;
	if(root){
		Node* current;
		queue <int> q;
		q.push(root);
		while(!q.empty()){
			current = q.front();
			//cout<<current->data<<" ";
			v.push_back(current->data);
			if(root->left) q.push(root->left);
			if(root->right) q.push(root->right);
			q.pop();
		}
	}
	for (int i = v.size(); i>=0; i--)
		cout<<v[i]<<" ";
	return;
}

int height(Node* root){
	if(root==NULL)
		return 0;

	int left = height(root->left);
	int right = height(root->right);

	return max(left,right)+1;
}

int diameter(Node* root, int &res){
	if(root==NULL)
		return 0;

	int left = diameter(root->left);
	int right = diameter(root->right);

	int temp = max(left,right)+1;
	int ans = max(left+right+1,temp);
	res = max(ans,res);
	return temp;
}

Node* Insert(Node* root, int data){
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

bool isBalanced(Node* root){
	if(root==NULL)
		return 1;

	int left = height(root->left);
	int right = height(root->right);

	if (abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right))
		return 1;
	return 0;
}

int isBstUtil(Node* root, int mn, int mx){
	if(root==NULL)
		return 1;
	if(root->data <mn || root->data>mx)
		return 0;
	return 
		isBstUtil(root->left,mn,root->data-1)
		&& isBstUtil(root->right,root->data+1,mx);
}

int isBst(Node* root){
	return isBstUtil(root,INT_MIN,INT_MAX);
}

vector<int> verticalOrder(Node *root)
{
       vector <int> vr;
       // Base case 
    if (root == NULL) 
        return vr; 
  
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
            vr.push_back(it->second[i]); 
        }
        // cout << endl; 
    }
    return vr;
}


void mirrorTree(Node* root){
	if (root)
	{
		mirrorTree(root->left);
		mirrorTree(root->right);

		Node* temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
	return;
}

int maxvalue(Node* root){
	int mx = INT_MIN;
	if (root==NULL)
	return;
	
	mx = max(mx,root->data);
	maxvalue(root->left);
	maxvalue(root->right);
	return mx;
}

int minvalue(Node* root){
	int mx = INT_MAX;
	if (root==NULL)
	return;
	
	mn = min(mn,root->data);
	minvalue(root->left);
	minvalue(root->right);
	return mn;
}

Node* searchVal(Node* root,int data){
	if(root==NULL)
		return NULL;

	if(root->data == data)
		return root;
	searchVal(root->left,data);
	searchVal(root->right,data);

	return NULL;
}


void mirrorTree(Node* root){
	if (root)
	{
		mirrorTree(root->left);
		mirrorTree(root->right);

		Node* temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
	return;
}

int countLeavesInBT(Node* root){
	if(root==NULL)
		return 0;
	if(root->right == NULL && root->left==NULL)
		return 1;
	else
	return countLeavesInBT(root->left)+countLeavesInBT(root->right);
}

Node* LCA(Node* root, int n1, int n2){
	if(root==NULL)
		return root;
	if(root->data == n1 || root->data == n2)
		return root;

	Node* left = LCA(root->left,n1,n2);
	Node* right = LCA(root->right,n1,n2);

	if(left != NULL && right!=NULL)
		return root;
	else
		(left:left?right);
}

bool isIdentical(Node* r1, Node* r2){
	if(r1==NULL && r2==NULL)
		return true;
	if(r1 != NULL && r2 != NULL && r1->data==r2->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right))
		return true;
	return false;
}

void leftView(Node* root){
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

			//condition to print only first element of each level
			if(i==0) cout << current->data<<" ";
			
			if (current->left != NULL) q.push(current->left);
			if (current->right != NULL) q.push(current->right);
			q.pop();
			}
		}
}

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
	int res = INT_MIN;
	Node* root = NULL;
	root = Insert(root,9); 
	root = Insert(root,5);
	root = Insert(root,10);
	root = Insert(root,4); 
	root = Insert(root,3); 
	root = Insert(root,14);
	return 0;
}