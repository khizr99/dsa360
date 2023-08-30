#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int main(){
    string input;
    getline(cin,input);

    //Creating a string stream object
    stringstream ss(input);

    //This object(ss) supports >> and << operators which allows to read and write data to this stream
    string token;
    vector<string> tokens;
    while(getline(ss,token,' ')){
        tokens.pb(token);
    }
    //Printing
    for(auto token: tokens){
        cout<<token<<",";
    }
    return 0;
}