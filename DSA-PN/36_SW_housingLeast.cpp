#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void minSubArrayHousing(int *arr, int n, int k){
    int i=0,j=0,cs=0, cmin = INT_MAX,a=0,b=0;
    while(j<n){

        cs+=arr[j];
        j++;

        while(i<j && cs>k){
            cs = cs-arr[i];
            i++;
        }
        if(cs==k && (j-1-i)<=cmin){
           cmin= min(cmin,(j-1-i));
            a = i; b=j-1;
        }
    }
    cout<<a<<" - "<<b;
}
int main(){

    int plots[] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(plots[0]);
    int k = 8;
     minSubArrayHousing(plots,n,k);
    
    return 0;
}