#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

int MaxSubArraySum(vi arr){
    
    int n = arr.size();
    int totalSum = 0, maximum = INT_MIN;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0) cnt++;
        totalSum = max(totalSum+arr[i],arr[i]);
        maximum = max(totalSum,maximum);
    }
    if(cnt==n) return 0;
    else return maximum;
        
    
}
int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<MaxSubArraySum(arr)<<endl;
    return 0;
}