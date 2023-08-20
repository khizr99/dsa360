#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sort(v) sort(all(v))
typedef unordered_set<int> us;

int rain(vi arr){
    int n = arr.size();

    //Edge case
    if(n<=2) return 0;

    vi l(n,0), r(n,0);
    l[0]=arr[0]; r[n-1]=arr[n-1];

    //Inserting highest values of bars at each index from left and also from right
    for(int i=1; i<n; i++){
        l[i] = max(l[i-1],arr[i]);
        r[n-i-1] = max(r[n-i],arr[n-i-1]); 
    }
   //Calculating total amount of water trapped
    int totalWater=0;
   for(int i=0; i<n; i++){
    totalWater+= min(l[i],r[i])-arr[i];
   }
    return totalWater;
}


int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<rain(arr)<<endl;
    return 0;
}