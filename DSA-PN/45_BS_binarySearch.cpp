#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int binarySearch(vi arr, int key){

    int s = 0, e = arr.size()-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(key == arr[mid]) return mid;
        else if(key< arr[mid]) e = mid-1;
        else s = mid+1;
    }
    return -1;
}
int main(){

vi arr;
int n,temp,key;
cin>>n>>key;
for(int i=0; i<n; i++){
    cin>>temp;
    arr.pb(temp);
}

cout<<binarySearch(arr, key)<<endl;
    return 0;
}