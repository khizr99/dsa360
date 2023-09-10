#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int compressString(vector<char>& chars){ 
    int n= chars.size(),cnt=1;
    string result="";
    char c = chars[0];  
       for(int i=1; i<n; i++){
        if(chars[i]==chars[i-1]) cnt++;      
       else {
        result+= c+to_string(cnt);
        cnt=1;
        c = chars[i];
        }
       }
       result+= c+to_string(cnt);
       if(result.length()<n)return ;
       return ;
       
}

int main(){
    int n;
    cin>>n;
    char temp;
    vector<char> arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
    cout<<compressString(arr)<<endl;
    return 0;
}