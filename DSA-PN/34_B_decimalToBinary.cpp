#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int decimalToBinary(int n){
    int i=0, ans=0;  
    while(n>0){
        int rem = n%2;
        ans += rem*pow(10,i);
        n/=2;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
    return 0;
}