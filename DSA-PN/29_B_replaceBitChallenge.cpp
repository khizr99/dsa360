#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void clearBitsInRange(int &n, int i, int j){
    int a = (-1<<(j+1)), b = (1<<i) -1;
    int mask = (a|b);
    n = (n&mask);
}

void replaceBitChallenge(int &n,int m,int i,int j){
    clearBitsInRange(n,i,j);
    int mask = (m<<i);
    n = (n|mask);
}
int main(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    replaceBitChallenge(n,m,i,j);
    cout<<n;
    return 0;
}