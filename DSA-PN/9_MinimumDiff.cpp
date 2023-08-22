#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

pii MinimumDiff(vi arr1, vi arr2){

        int n = arr1.size(), m = arr2.size();
        srt(arr1); srt(arr2);

        int i=0,j=0,minm = INT_MAX, diff = 0;
        pair<int,int> p1;

          while(i<n && j<m){
            diff = abs(arr1[i]-arr2[j]);
            if(diff<minm){
                minm = diff;
                p1 = {arr1[i],arr2[j]};
            }
            if(arr1[i]<arr2[j]) i++;
            else j++;
          }
    return p1;
}
int main(){
    int n,m,temp1,temp2;
    cin>>n>>m;
    vi arr1,arr2;
    for(int i=0; i<n; i++){
        cin>>temp1;
        arr1.pb(temp1);
    }
    cout<<"................."<<endl;
    for(int i=0; i<m; i++){
        cin>>temp2;
        arr2.pb(temp2);
    }
    auto p = MinimumDiff(arr1,arr2);
    cout<<p.first<<","<<p.second;
}