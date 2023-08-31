#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void subsequence(string s, string o, vector<string> &v){

    //1. Base Case
    if(s.size()==0){
        v.pb(o);
        return;
    }

    //2. Recursive Case
    char ch = s[0];
    string reduced_input = s.substr(1);

    //includes
    subsequence(reduced_input,o+ch,v);

    //excludes
    subsequence(reduced_input, o, v);
}

//helper function
bool compare(string s1, string s2){
    if(s1.length()==s2.length()) return s1<s2;
          
    return s1.length() < s2.length();
}
int main(){
    string s;
    cin>>s;
    vector<string> v;
    string output = " ";
    subsequence(s,output,v);
    sort(v.begin(), v.end(),compare);
    for(auto it:v){
        cout<<it<<",";
    }
    return 0;
}