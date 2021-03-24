#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* link; 
};

//declaring haed as global
node* head;

void insert(int x){
    node* temp = new node();
    temp->data = x;
    //newly created temp->link will point to the 
    //value present in the HEAD.
    temp->link = head;
    head = temp;
};

void print(){
    node* temp = head;
    while(temp!= NULL){
        printf("%d",temp->data);
        temp = temp->link; 
    }
}

//floyd's algorithm
int detectLoop() 
{ 
    node* slow = head;
    node* fast = head; 
  
    while (slow && fast && fast->link) { 
        slow = slow->link; 
        fast = fast->link->link; 
        if (slow == fast) { 
            return 1; 
        } 
    } 
    return 0; 
} 

int main(){
    head = NULL;
    int n,x;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        insert(x);
        print();
    }
    if (detectLoop())
        cout<<"TRUE";
    else
        cout<<"FALSE";

}