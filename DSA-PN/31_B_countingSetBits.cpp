#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int countSetBits(int n){
    int cnt=0;
    while(n>0){
        cnt += (n&1);
        n = n>>1;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}