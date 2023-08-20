#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sort(v) sort(all(v))
typedef unordered_set<int> us;

int longestBand(vi arr){
    int largest=1;
    us u;
    int n = arr.size();
    for(int x:arr){
        //Inserting into unordered_set
        u.insert(x);
    }
for(auto element:u){
    int parent = element-1;
    if(u.find(parent)==u.end()){
        int next_num = element+1;
        int cnt = 1;
        while(u.find(next_num)!=u.end()){
            next_num++;
            cnt++;
        }
        largest = max(largest,cnt);
    }
}
    return largest;
}
int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<longestBand(arr)<<endl;
    return 0;
}