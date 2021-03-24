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
node*  detectLoop() 
{ 
    node* slow = head;
    node* fast = head; 
  
    while (slow && fast && fast->link) { 
        slow = slow->link; 
        fast = fast->link->link; 
        if (slow == fast) { 
            return slow; 
        } 
    } 
    return 0; 
} 

// void removeLoop(Node* head)
// {
//     Node* slow = head;
//     Node* fast = head; 
//     Node* temp;
//     while (slow && fast && fast->next) { 
//         slow = slow->next; 
//         fast = fast->next->next; 
//         if (slow == fast) { 
//             temp=slow; 
//         } 
//     }
    
//     Node* start = head; 
    
//     while(temp->next != start ){
//         temp->next;
//         start->next;
//     }
//     temp->next = NULL;
// }

void removeLoop(node* slow){
    node* temp = head;
    while(slow->link != temp){
        slow = slow->link;
        temp = temp->link;
    }
    slow->link = NULL;
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
    node* slow = detectLoop();
    removeLoop(slow);
    printf("\n");
}