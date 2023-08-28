#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

void space20(char *str){
    int space = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ') space+=1;
    }
    int idx = strlen(str) + 2*space;
    str[idx] = '\0';

    for(int i=strlen(str)-1; i>=0; i--){
        if(str[i]==' '){
            str[idx-1] = '0';
            str[idx-2]= '2';
            str[idx-3] = '%';
            idx = idx-3;
        }else {
            str[idx-1] = str[i];
            idx--;
        }
    }
}

int main(){
    char input[10000];
    cin.getline(input,1000);
    space20(input);
    cout<<input<<endl;
    return 0;
}