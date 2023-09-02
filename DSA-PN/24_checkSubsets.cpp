#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

bool isSubset(string str, string temp){
  int i= str.length()-1, j=temp.length()-1;
  while(i>=0 && j>=0){
    if(temp[j]==str[i]){
        j--;
         i--;
    }
    else{
        i--;
    }
  }
  if(j==-1) return true;
  return false;
}
int main(){
    string str,temp;
    getline(cin,str);
    cin>>temp;
    cout<< isSubset(str,temp)<<endl;
    return 0;
}