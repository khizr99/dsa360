#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back


int join_ropes(int ropes[], int n){

    //Min_Heap
    priority_queue<int, vector<int>, greater<int>> heap(ropes,ropes+n);

    //Logic
    int cost = 0;
    while(heap.size()>1){

        int A = heap.top();
        heap.pop();

        int B = heap.top();
        heap.pop();

        int new_rope = (A+B);
        cost += new_rope;
        heap.push(new_rope);
    }
    return cost;
}

int main(){
    int ropes[] = {4,3,2,6};
    int n = 4;

    cout<<join_ropes(ropes,n)<<endl;

    return 0;
}