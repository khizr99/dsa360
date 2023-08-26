#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef stack<int> st;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

int largestRectangleArea(vi& heights) {
        st st;
        int maxA = 0;
        int n = heights.size();
        for(int i=0; i<=n; i++){
            while((!st.empty()) && (i==n or heights[st.top()]>=heights[i])){
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width = i;
                else width = i-st.top()-1;
        maxA = max(maxA, width*height);
            }
            st.push(i);
        }
        return maxA;
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