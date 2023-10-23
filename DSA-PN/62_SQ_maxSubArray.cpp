#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

vi maxSubArray(vi arr,int k){
    vi res;
    int n = arr.size();
    deque<int> Q(k);

    int i;
    for(i=0; i<k; i++){
        while(!Q.empty() && arr[i]>=arr[Q.back()])  Q.pop_back();

        Q.push_back(i);
    }
 res.pb(arr[Q.front()]);

    for( ; i<n; i++){

        while(!Q.empty() && Q.front()<=i-k) Q.pop_front();

        while(!Q.empty() && arr[i]>= arr[Q.back()]) Q.pop_back();

        Q.push_back(i);

         res.pb(arr[Q.front()]);
    }

    return res;
}

int main(){
    vi arr{1,2,3,1,4,5,2,3,5};  
    auto res = maxSubArray(arr,3);
    for(auto ele : res) cout<<ele<<",";
    return 0;
}
//1,2,3,1,4,5,2,3,5