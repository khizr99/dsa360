#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

int largestRectangleArea(vector<int>& heights) {
       
        int n = heights.size();
        vi l(n,0), r(n,0);
        
    }

int main(){

    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<largestRectangleArea(arr)<<endl;
    return 0;
}   