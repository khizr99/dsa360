#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sort(v) sort(all(v))
typedef unordered_set<int> us;

//Helper Function
bool outOfOrder(vi arr, int i){
    int x = arr[i];
    if(i==0) return x>arr[1];
    if(i==arr.size()-1) return x<arr[i-1];
    return x>arr[i+1] or x<arr[i-1];
}
pair<int,int> subArray(vi arr){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int n = arr.size();

    for(int i=0; i<n; i++){
        int x = arr[i];

    if(outOfOrder(arr,i)){
        smallest = min(smallest,x);
        largest = max(largest,x);
    }

}
    //Next step we will check whether the smallest and largest value would placed.
    if(smallest==INT_MAX){
        return{-1,-1};
    }
    int left = 0;
    while(smallest>=arr[left]){
        left++;
    }
    int right = n-1;
    while(largest<=arr[right]){
        right--;
    }

    return{left,right};
}

int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    auto p = subArray(arr);
    cout<<p.first<<" and "<<p.second<<endl;
    return 0;
}