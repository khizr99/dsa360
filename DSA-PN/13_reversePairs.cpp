#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

// int cnt = 0;
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

int reversePairs(vi &arr, int low, int mid,int high){
    int cnt=0;
    int right = mid+1;
    for(int i=low; i<=mid; i++){
        while(right<=high && arr[i]>2*arr[right]) right++;
        cnt+=(right-(mid+1));
    }
    return cnt;
}
int mergeSort(vi &arr, int low, int high){
    int count =0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count += mergeSort(arr,low,mid);  //left half
    count += mergeSort(arr,mid+1,high); //right half
    count += reversePairs(arr,low,mid,high);
    merge(arr,low,mid,high);  //merging sorted halves
    return count;
}
int reversePairs(vi &arr){
    int n = arr.size();
   return mergeSort(arr,0,n-1);

}
int main(){
    int n,t;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>t;
        arr.pb(t);
    }
    cout<<reversePairs(arr)<<endl;
    return 0;
}