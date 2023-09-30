#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

class node{
    public:
         int data;
         node* next;

         node(int data){
            this->data = data;
            next = NULL;
         }
};

//-------------Linked List---------------//

//Inserting At Head
void insertAtHead(node * &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node* n = new node(data);
    n->next = head;
    head = n;
    
}

// Inserting In Middle
void insertingInMiddle(node * &head, int data, int pos){

    if(pos==0) insertAtHead(head, data);
    else{
        node * temp = head;
        for(int i=1; i<pos; i++){
            temp = temp->next;
        }
        
        node * n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

// Recursively Reverse

node* recReverse(node * head){

    //Base Case
    if(head==NULL || head->next==NULL) return head;

    //Otherwise
    node * shead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return shead;
}

//Iteratively Reverse
void iterativelyReverse(node* &head){
    node * prev = NULL;
    node * curr = head;
    node * temp;
    while(curr!=NULL){
        //storing next
        temp = curr->next;
        //update the current
        curr->next = prev;
        
        //prev and current;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

void printLL(node * head){

    while(head!=NULL){
        cout<<head->data <<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head,8);
    insertAtHead(head,10);
    insertAtHead(head,12);
    insertAtHead(head,14);
    insertingInMiddle(head,100,2);
    printLL(head);
    iterativelyReverse(head);
    printLL(head);
    return 0;
}