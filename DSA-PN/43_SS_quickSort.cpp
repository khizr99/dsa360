#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int partition(vi &arr, int s, int e){

    int pivot = arr[e];
    int i = s-1;
    for(int j=s; j<e; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quickSort(vi &arr, int s, int e){
    //Base Case
    if(s>=e) return;

    //Recursive case
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    
    vi arr{10,5,2,0,7,6,4};
    int n = arr.size();
    quickSort(arr,0,n-1);
    for(int x: arr){
        cout<<x<<",";
    }
    return 0;
}