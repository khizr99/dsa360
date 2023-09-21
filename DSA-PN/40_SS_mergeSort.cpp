#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void merge(vi &arr, int s, int e){
    vi temp;

    int mid = (s+e)/2;
    int i=s,j=mid+1;

    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]) {
            temp.pb(arr[i]);
            i++;
        }
        else{
             temp.pb(arr[j]);
             j++;
        }
    }

    while(i<=mid) temp.pb(arr[i++]);
    while(j<=e) temp.pb(arr[j++]);

    int k=0;
    for(int i=s; i<=e; i++){
        arr[i]=temp[k++];
    }
        
    return;
}

//sorting method
void mergeSort(vi &arr, int s, int e){
    //base case
    if(s>=e) return; //Here s>e means if there is no element and s==e means if there is single element

    //recursive case
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    return merge(arr,s,e);

}
int main(){

    vi arr{10,5,2,0,7,6,4};
    int s=0;
    int e = arr.size()-1;
    mergeSort(arr,s,e);
    for(int x: arr){
        cout<<x<<",";
    }
   
    return 0;
}