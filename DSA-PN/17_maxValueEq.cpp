#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int maxValueOfEquation(vvi arr, int k){
int maxVal = INT_MIN;
int n = arr.size();
    for(int i=1; i<n; i++){
        int absDiff = abs(arr[i][0] - arr[i-1][0]);
        if(absDiff<=k){
            maxVal = max(maxVal,arr[i][1]+arr[i-1][1]+absDiff);
        }
    }
    return maxVal;
}
int main(){
    int n,m,temp,k;
    cin>>n>>m>>k;
    vvi arr;
    for(int i=0; i<n; i++){
        vi row;
        for(int j=0; j<m; j++){
            cin>>temp;
            row.pb(temp);
        }
        arr.pb(row);
    }
    cout<<maxValueOfEquation(arr,k)<<endl;
    return 0;
}