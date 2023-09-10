#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

//fast exponentiation
int fastExpo(int a,int n){
    int ans = 1;
    while(n>0){
        int last_digit = (n&1);
        if(last_digit) ans = ans*a;
        a = a*a;
        n = n>>1;
    }
    return ans;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<fastExpo(a,n);
    return 0;
}