#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

void merge(vi &arr,int low,int mid,int high){
    vi temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.pb(arr[left]);
            left++;
        }
        else{
            temp.pb(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.pb(arr[left]);
        left++;
    }
    while(right<=high){
        temp.pb(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vi &arr, int low, int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);  //left half
    mergeSort(arr,mid+1,high); //right half
    merge(arr,low,mid,high);  //merging sorted halves
}
int main(){
    int n,t;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>t;
        arr.pb(t);
    }
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}