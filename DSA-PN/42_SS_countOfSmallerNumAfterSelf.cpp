#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;


vi countSmaller(vi &nums){
    int n = nums.size();
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++){
        v[i].first = nums[i];
        v[i].second = i;        
    }
    vi count(n,0);
   // mergeSort(count,v,0);
    return count;
}

int main(){

    return 0;
}