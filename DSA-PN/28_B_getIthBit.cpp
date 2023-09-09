#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

//1. Getting ith bit
int getIthBit(int n, int i){
    int mask = (1<<i);
    return (n&mask) >0 ?1 :0;
}

//2. Setting ith bit (i.e replacing 0 with 1)
void setIthBit(int &n, int i){
    
    int mask = (1<<i);
    n = (n|mask);
}

//3. Clearing ith bit (i.e replacing 1 with 0)
void clearIthBit(int &n, int i){

    int mask = ~(1<<i);
    n = (n&mask);
}

//4. Updating ith bit (i.e replacing 1 with 0 or vice-versa)
void updateIthBit(int &n, int i, int v){

    clearIthBit(n,i);
    int mask = (v<<i);
    n = (n|mask); // sets the right value
}

//5. Clearing Last ith bits
void clearLastIthBits(int &n, int i){

    int mask = (-1 << i);
    n = (n&mask);
}
int main(){

    int n=15;
    int i;
    cin>>i;
   // cout<<getIthBit(n,i)<<endl;
   //setIthBit(n,i);
   //clearIthBit(n,i);
   // int v;
   // cin>>v;
   // updateIthBit(n,i,v);
   clearLastIthBits(n,i);
   cout<<n;
}