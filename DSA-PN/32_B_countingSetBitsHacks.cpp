#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int count_bits_hack(int n){

    int ans = 0;
    while(n>0){
    //removes the last set bit from the current number
    n = (n&(n-1));
    ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<count_bits_hack(n);
    return 0;
}