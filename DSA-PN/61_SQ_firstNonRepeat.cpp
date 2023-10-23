#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

vector<char> FindFirstNonRepeatingscharacter(string S){
 vector<char>res;
 queue<char> q;
 int freq[27] = {0};

 for(int i=0; i<S.length(); i++){

    //letter
    q.push(S[i]);
    freq[S[i]-'a']++;

    while(!q.empty()){
        int idx = q.front()-'a';
        if(freq[idx]>1) q.pop();
        else {
            res.pb(q.front());
            break;
        }
    }
    if(q.empty()) res.pb('0');
 }
return res;
}

int main(){
    string input="aaabbcdbbaac";
    auto res = FindFirstNonRepeatingscharacter(input);
    for(auto ele : res) cout<<ele<<" ";
    return 0;
}