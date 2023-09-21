#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;


int merge(vi &arr, int s, int e){
    int mid = (s+e)/2;
    vi temp;

    int i=s, j=mid+1;
    int cnt=0;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp.pb(arr[i]);
            i++;
        }
        else{
            cnt += mid-i+1;
            temp.pb(arr[j]);
            j++;
        }
    }

    while(i<=mid) arr[i++];
    while(j<=e) arr[j++];

    int k=0;
    for(int i=s; i<=e; i++){
        arr[i] = temp[k++];
    }
    return cnt;
}

int inversion_count(vi &arr, int s,int e){
    int mid = (s+e)/2;

    if(s>=e) return 0;

   int c1 = inversion_count(arr,s,mid);
   int c2 = inversion_count(arr,mid+1,e);
   int c3 = merge(arr,s,e);
   return c1+c2+c3;
}


int main(){
    vi arr;
    int temp,n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    int s=0, e = n-1;
    cout<<inversion_count(arr,s,e)<<endl;
   
    return 0;
}