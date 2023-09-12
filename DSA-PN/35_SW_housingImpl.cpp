#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void housing(int *arr, int n, int k){
  int i=0,j=0,cs=0;
  
  while(j<n){

    //expand to right
    cs+=arr[j];
    j++;

    //remove elements from the left till cs > sum and i<j
    while(cs > k && i<j){
        cs = cs - arr[i];
        i++;
    }

    //Checking if any given point
    if(cs==k){
        //printing the window
        cout<<i <<" - "<<j-1 <<endl;
    }
  }
  
}
int main(){
    int plots[] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(plots[0]);
    int k = 8;
     housing(plots,n,k);
    return 0;
}