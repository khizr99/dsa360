#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

vi ArrayProduct(vi arr){

    int n = arr.size();
    vi output(n,1);
    vi l(n,1), r(n,1);
    l[0]=arr[0]; r[n-1] = arr[n-1];

    for(int i=1; i<n; i++){
        l[i] = arr[i]*l[i-1];
        r[n-i-1] = arr[n-i-1]*r[n-i];
    }
    output[0] = r[1], output[n-1] = l[n-2];
    for(int i=1; i<=n-2; i++){
        output[i] = r[i+1]*l[i-1];
    }
    return output;
}
int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    auto p = ArrayProduct(arr);
   for(int ele : p){
    cout<<ele<<",";
   }
    return 0;
}