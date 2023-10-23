#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

class node{

    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

//Input : 1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1

node * buildTree(){

    int d;
    cin>>d;

    if(d==-1) return NULL;

    node* n = new node(d);
    n->left =  buildTree();
    n->right = buildTree();

    return n;
}

//Building level order 

node* levelOrderBuild(){

    int d;
    cin>>d;

    node* root = new node(d);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;
        
        if(c1!=-1 ){
            curr->left = new node(c1);
            q.push(curr->left);
        }

        if(c2!=-1 ){
            curr->right = new node(c2);
            q.push(curr->right);
        }
    }

    return root;
}

//Level Order Print

void levelOrderPrint(node* root){
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
        //Insert a new null for the next level
            if(!q.empty()) q.push(NULL);
        }

        else{
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

        }
    }
return;

}

//Helper Function : Height of the tree
int height(node*root){
    if(root==NULL) return 0;

    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1,h2);
}

// Diameter---Time Complexity is O(n^2); Because at every node we are traversing the left-subtree and right-subtree
int diameter(node*root){
    //Base Case
    if(root==NULL) return 0;

    //Recursive Case
    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1,max(D2,D3));
}
int main(){

    node* root = buildTree();
    //node * root = levelOrderBuild();
    //cout<<endl;
    levelOrderPrint(root);
    cout<<"Diameter is :"<<diameter(root)<<endl;
    return 0;
}

//Input : 1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1