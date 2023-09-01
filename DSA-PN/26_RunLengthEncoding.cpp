#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

string compressString(const string &str){ 
    int n=str.length(),cnt=1;
    string result="";
    char c = str[0];  
       for(int i=1; i<n; i++){
        if(str[i]==str[i-1]) cnt++;      
       else {
        result+= c+to_string(cnt);
        cnt=1;
        c = str[i];
        }
       }
       result+= c+to_string(cnt);
       if(result.length()<n)return result;
       return str;
       
}

int main(){
    string str;
    cin>>str;
    cout<<compressString(str)<<endl;
    return 0;
}