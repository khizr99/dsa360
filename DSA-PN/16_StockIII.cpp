#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int stock(vi arr){
    int n = arr.size();
    vi l(n,0), r(n,0);
    int Lmin = arr[0], Rmax = arr[n-1];
    l[0] = 0, r[n-1] = 0;

    for(int i=1; i<n; i++){
        if(arr[i]<=Lmin) Lmin = arr[i];
        l[i] = max(l[i-1], arr[i]-Lmin);
        if(arr[n-i-1]>=Rmax) Rmax = arr[n-i-1];
        r[n-i-1] = max(r[n-i], Rmax-arr[n-i-1]);
    }
    int profit = r[0];
    for(int i=1; i<=n-2; i++){
        profit = max(profit,l[i-1]+r[i]);
    }
    return profit;
}
int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<stock(arr)<<endl;
    return 0;
}