#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

int main(){
    string paragraph,word;
    getline(cin,paragraph);
    cin>>word;
    cout<<paragraph<<endl;
    int i=0,count = 0;
    int index = paragraph.find(word);
    while(index !=-1){
        cout<<word + " is found at Index "<<index<<endl;
        index = paragraph.find(word, index+1);
    }
    return 0;
}