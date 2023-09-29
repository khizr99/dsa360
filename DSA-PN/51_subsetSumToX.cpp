#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

int countSubsets(vi arr, int n, int i, int X){

    //Base Case
    if(i==n){
        if(X==0) return 1;
        return 0;
    }

    //Recursion Case
    int inc = countSubsets(arr,n,i+1,X-arr[i]);
    int exc = countSubsets(arr,n,i+1,X);
    return inc+exc;
    
}

int main(){
    vi arr{1,2,3,4,5};
    int X = 10;
    cout<<countSubsets(arr,arr.size(),0,X);
    return 0;
}



