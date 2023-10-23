#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back


class Node{
    public:
    int key;
    Node*left;
    Node*right;

    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};

Node* sortedArrayToBST(vector<int> arr, int start, int end){

    //Return Null if s>e, because no array elements are there
    if(start>end) return NULL;

    //Getting the middle element and make it root
    int mid = (start+end)/2;
    Node *root = new Node(arr[mid]);

    //Create left & right subtrees recursively
    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;

}

int closestInBst(Node*root,int target){
    int diff = INT_MAX;
    int closest;

    Node * temp = root;

    while(temp!=NULL){

        int curr_diff = abs(temp->key-target);

        if(curr_diff==0) return temp->key;

        if(curr_diff<diff){
            diff = curr_diff;
            closest = temp->key;
        }
        //For right and left
        if(target<temp->key)temp = temp->left;                 
        else temp = temp->right;

    }
    return closest;
}


int main(){
vi arr{1,2,3,4,5,6,7};
int n = 7;
Node * root = sortedArrayToBST(arr,0,n-1);
cout<<"Closest in BST is: "<<closestInBst(root,8)<<endl;
    return 0;
}