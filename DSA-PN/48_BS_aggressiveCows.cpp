#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

bool canPlaceCows(vi arr, int mid, int c){
    int i=0, j=1,cowCnt = 1;
    while(i<=j && j<arr.size()){
        if(arr[j]-arr[i] < mid) j++;
        else {
            i=j;
            cowCnt++;
            j++;
        }
        if(cowCnt == c) return true;
    }
    
    return false;
}

int aggressiveCows(vi arr, int c){
    int n = arr.size();
    int s=0, e = arr[n-1] - arr[0],ans = -1;

    while(s<=e){
        int mid = (s+e)/2;
        if(canPlaceCows(arr,mid,c)==true) {
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;       
    }
    return ans;
}

int main(){

    int C=3;
    vi stalls{1,2,4,8,9};
    cout<<aggressiveCows(stalls,C);

    return 0;
}
