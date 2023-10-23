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

node* merge(node *L1, node *L2){

    //Base Case
    if(L1==NULL) return L2;
    if(L2==NULL) return L1;

    //Recursive Case

    node * first;
    if(L1->data < L2-> data){
        first = L1;
        first->next = merge(L1->next,L2);
    }
    else{
        first = L2;
        first->next = merge(L1,L2->next);
    }
    return first;
}

//Inserting At Head
void insertAtHead( int data){
    // if(head==NULL){
    //     head = new node(data);
    //     return;
    // }
    node* n = new node(data);
    n->next = head;
    head = n;    
}

int main(){
    node* L1 = NULL;
    L1.insertAtHead(10);
    L1.insertAtHead(7);
    L1.insertAtHead(5);
    L1.insertAtHead(1);
    
    node* L2 = NULL;
    L2.insertAtHead(6);
    L2.insertAtHead(3);
    L2.insertAtHead(2);
    return 0;
}