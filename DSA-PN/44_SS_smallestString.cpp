#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

bool compare(string x, string y){
    return x+y < y+x;
}
int main(){

    string arr[] = {"a", "ab", "aba"};
    int n=3;

    sort(arr,arr+n,compare);

    for(auto s:arr){
        cout<<s;
    }

    return 0;
}