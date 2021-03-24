#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};



void print(Node* head){
    Node* temp ;
    temp = head;

    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
}

int getIntesectionNode(Node* head1,Node* head2){

    Node* temp1 = head1;
    Node* temp2 = head2;

    int count1 = 0;
    int count2 = 0;
    
    while(temp1 != NULL){
        count1++;
        temp1 = temp1->next;
    }

    while(temp2 != NULL){
        count2++;
        temp2 = temp2->next;
    }

    int diff = abs(count1-count2);
    //cout<<diff;
    
    Node* e1 = head1;
    Node* e2 = head2;

    //to make counter of both at equal leangth
    if (count1>count2)
    {
        for(int i=diff; diff>0;i--){
            e1=e1->next;
            diff--;
        }
    }
    else{
       for(int j=diff; diff>0;j--){
            e2=e2->next;
            diff--;
        }  
    }


    //to find the intersection
    while(e1 != NULL || e2 != NULL){
        if (e1 == e2)
        {
            return e1->data;
        }
        e1=e1->next;
        e2 =e2->next;
    }
    return -1;
}


int main(){
     Node* newNode; 
  
    // Addition of new nodes 
    Node* head1 = new Node(); 
    head1->data = 10; 
  
    Node* head2 = new Node(); 
    head2->data = 3; 
  
    newNode = new Node(); 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 
  
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    cout<<getIntesectionNode(head1, head2);
    return 0;
}