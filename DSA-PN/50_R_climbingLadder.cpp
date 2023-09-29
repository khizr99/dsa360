#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

int countWays(int n){

    //Base_Case
    if(n<0) return 0;
    if(n==0) return 1;

    //Recursion_Case
   return countWays(n-1)+countWays(n-2)+countWays(n-3);

}

int main(){
    int n;
    cin>>n;
    cout<<countWays(n);

    return 0;
}