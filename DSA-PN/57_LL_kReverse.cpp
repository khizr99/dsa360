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

int listLength(node *head){
    int cnt=0;
    if(head==NULL) return 0;
    while(head!=NULL){
        head = head->next;
        cnt++;
    }
    return cnt;
}


node* reverse(node* head , int k , int length){   
if(length < k) return head;

    node * prev = NULL;
    node * curr = head;
    node * temp;
    int cnt = 1;
    while(curr!=NULL && cnt<=k){

        temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
        cnt++;
    }
    if(temp!=NULL){
        head->next = reverse(temp,k,length-k);
    }

    return prev;
}

node* reverseKGroup(node* head, int k) {
int length = listLength(head);
   auto res = reverse(head,k,length);
   return res;
}


void insertAtHead(node * &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node* n = new node(data);
    n->next = head;
    head = n;
    
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
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    cout<<listLength(head)<<endl;
    printLL(head);
    head = reverseKGroup(head,3);
    printLL(head);
   
}