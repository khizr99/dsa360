#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void negativeHousing(vi v, int k){

    int i=0,j=0,cs=0;
    int n = v.size();
    int minm = *min_element(v.begin(),v.end());
    for(int l=0; l<n; l++){
        v[l] += abs(minm)+1;
    }

    while(j<n){

    //expand to right
    cs = cs + v[j];
    j++;

    //remove elements from the left till cs > sum and i<j
    while(cs > k+(j-i)*(abs(minm)+1) && i<j){
        cs = cs - v[i];
        i++;
    }

    //Checking if any given point
    if(cs== k+(j-i)*(abs(minm)+1)){
        //printing the window
        cout<<i <<" - "<<j-1 <<endl;
    }
  }
  
}
int main(){
    vi v = {-1,-1,1};
    int k=0;
    negativeHousing(v,k);
    return 0;
}