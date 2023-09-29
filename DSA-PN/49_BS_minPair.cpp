#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

pair<int,int> minPair(vi arr1, vi arr2){
    pair<int,int> ans;
    int diff = INT_MAX,idx = -1;
    //sorting arr2
    sort(arr2.begin(), arr2.end());

    int m = arr2.size()-1;
    for(int i=0; i<arr1.size(); i++){
        int s = 0, e = m-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr2[mid]==arr1[i]) {
                ans.first = arr2[mid];
                ans.second = arr2[mid];
                return ans;
            }
            else if(arr2[mid]>arr1[i]){
                e = mid-1;
            }
            else s = mid+1;
            idx = mid;
        }
        if(idx==0){
            if(abs(arr2[0]-arr1[i])<diff){
                diff = abs(arr2[0]-arr1[i]);
                ans.first = arr1[i];
                ans.second = arr2[0];
                
            }
        }
        else{
            int a = abs(arr2[idx]-arr1[i]), b=abs(arr1[i]-arr2[idx-1]);
            if(a<b ){
                if(a<diff){
                    diff = a;
                ans.first = arr1[i];
                ans.second = arr2[idx];
                
                }                
            }
            else{
                if(b<diff){
                    diff = b;
                    ans.first = arr1[i];
                    ans.second = arr2[idx-1];
                    
                }
            }
        }


    }
    
    return ans;
}

int main(){
    vi arr1{-1,5,10,20,3};
    vi arr2{26,134,135,15,17};

    auto res = minPair(arr1,arr2);
     cout<<res.first<<","<<res.second;
    return 0;
}