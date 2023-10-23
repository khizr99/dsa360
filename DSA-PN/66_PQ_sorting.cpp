#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

class Compare{
public:
    bool operator()(int a, int b){
        return a>b;
    }
};

int main(){
    int arr[] = {10,15,20,13,6,90};
    int n = sizeof(arr)/sizeof(int);

    //priority_queue<int> heap;
    //priority_queue<int, vector<int>, greater<int>> heap;//Inbuilt comparator for min_Heap
    //Now Using Our Custom Comparator.
    priority_queue<int, vector<int>, Compare> heap;
    for(int x: arr) heap.push(x);

    while(!heap.empty()){
        cout<<heap.top() <<endl;
        heap.pop();
    }
    return 0;
}