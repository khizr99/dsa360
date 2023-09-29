#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int lowerBound(vi arr, int key){

    int s = 0, e = arr.size()-1;   
    int ans = -1;

    while(s<=e){
       int mid = (s+e)/2;

        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key) e = mid-1;
        else s = mid+1;
    }
    return ans;
}

int upperBound(vi arr, int key){

    int s = 0, e = arr.size()-1;
    int ans = -1;

    while(s<=e){

        int mid = (s+e)/2;
        if(arr[mid]==key) {
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>key) e = mid-1;
        else s = mid+1;
    }
    return ans;
}

int main(){
    vi arr{0,1,1,1,1,2,2,2,3,4,4,5,10};
    int key = 4;

    //method_1
    //cout<<upperBound(arr,key)-lowerBound(arr,key)+1;

    //method_2 Using STL(1 linear)
    cout<<upper_bound(arr.begin(),arr.end(),2)-lower_bound(arr.begin(),arr.end(),2);

    return 0;
}