#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;


int main(){
    int n;
    cin>>n;

    if( (n&(n-1))==0) {
        cout<<"Power of Two";
    }
    else {
        cout<<"Not a power of two";
    }

    return 0;
}