#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int main(){
    char input[1000];
    cin.getline(input,1000);

    //strtok()
    char *token = strtok(input," ");
    //cout<<strtok(NULL," ")<<endl; 
    /*internally maintains the state of the string you passed in the last fn call we store the state by making static variable*/
    while(token!=NULL){
        cout<<token<<endl;
        token = strtok(NULL," ");
    }
    return 0;
}