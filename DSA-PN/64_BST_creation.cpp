#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

class Node
{
    public:
    int key;
    Node *left;
    Node *right;

    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};

Node* insert(Node*root, int key){

    if(root==NULL) return new Node(key);

    if(key < root->key) root->left = insert(root->left,key);
    else root->right = insert(root->right,key);

    return root;
    
}

bool search(Node*root, int key){
    if(root==NULL) return false;

    if(root->key==key) return true;
    else if(key<root->key) search(root->left,key);
    else{
        search(root->right,key);
    }
    
}

void printInOrder(Node*root){
    if(root==NULL) return;

    //left,root,right
    printInOrder(root->left);
    cout<< root->key <<",";
    printInOrder(root->right);
}

//BST to LinkedList problem
class LinkedList{
    public:
        Node*head;
        Node*tail;

};

LinkedList tree2LL(Node* root){

    LinkedList l;
    //Base Case
    if(root==NULL) {
        l.head = l.tail = NULL;
        return l;
        }

    //4 Cases
    if(root->left==NULL && root->right==NULL) l.head = l.tail = root;
        
    else if(root->left!=NULL && root->right==NULL){
        LinkedList leftLL = tree2LL(root->left);
        leftLL.tail->right = root;

        l.head = leftLL.head;
        l.tail = root;
    }
    else if(root->left==NULL && root->right!=NULL){
        LinkedList rightLL = tree2LL(root->right);
        root->right = rightLL.head;

        l.head = root;
        l.tail = rightLL.tail; 
    }
    else{
        LinkedList leftLL = tree2LL(root->left);
        LinkedList rightLL = tree2LL(root->right);
        leftLL.tail->right = root;
        root->right = rightLL.head;
        l.head = leftLL.head;
        l.tail = rightLL.tail;

    }
    return l;
}

//-------------------Next Inorder Successor-----------//

Node * inorderSucc(Node * root, Node * target){

    //If Right Subtree
    if(target->right!=NULL){
        Node * temp = target->right;
        while(temp->left!=NULL) temp = temp->left;
        return temp;    
    }

    //Otherwise
    Node*temp = root;
    Node * succ = NULL;

    while(temp!=NULL){

        if(temp->key > target->key){
            succ = temp;
            temp = temp->left;
        }
        else if(temp->key < target->key) temp = temp->right;

        else break;       
    }

    return succ;
}
int main(){

    Node *root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x: arr){
        root = insert(root,x);
    }
    //printInOrder(root);
    //cout<<search(root,13)<<endl;
    LinkedList l = tree2LL(root);
    Node * temp = l.head;
    while(temp!=NULL){
        cout<<temp->key<<"-->";
        temp = temp->right;
    }
    return 0;
}