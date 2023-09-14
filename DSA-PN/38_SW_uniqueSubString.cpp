#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

string unique_substring(string str){
    int i =0,j=0, window_len  = 0, max_window_len = 0, start_window = -1;

    unordered_map<char,int> m;

    while(j<str.length()){
        char ch = str[j];
        //If it is inside hashmap and its idx >= start of the current window
        if(m.count(ch) && m[ch]>=i)
        {
            i = m[ch]+1;
            window_len = j-i;
        }

        m[ch] = j;
        window_len ++;
        j++;

        if(window_len > max_window_len){
            max_window_len = window_len ;
            start_window = i;
        }
    }
    return str.substr(start_window,max_window_len);
}
int main(){
    string str;
    cin>>str;
    cout<<unique_substring(str)<<endl;
    return 0;
}