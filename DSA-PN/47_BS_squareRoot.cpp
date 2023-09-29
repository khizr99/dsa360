#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

float squareRoot(int N, int p){

    //Binary Search
    int s = 0, e = N;
    float ans = 0;

    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid == N){
            return mid;
        }
        else if(mid*mid<N){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;           
        
    }

    //Linear Search for each place (for floating part)

    float inc = 0.1;

    for(int i=1; i<=p; i++){

        //do linear search

        while(ans*ans <= N){
            ans += inc;
        }

        //take one step back
        ans -= inc;
        
        inc = inc/10.0;
    }

    return ans;
}

int main(){

    int n,p;
    cin>>n>>p;
    cout<<squareRoot(n,p);
    return 0;
}