#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

string keypad[] = {"","","ABC","DEF","GHI","JKL","MND","MNO","PQRS","TUV","WXYZ"};

 void letterCombinations(string input, string output,int i=0) {
        
        //Base_Case
        if(input[i]=='\0') {
            cout<<output<<endl;
            return;
        }

        //Recursion_Case
        int current_digit = input[i] - '0';
        if(current_digit==0 || current_digit==1){
            letterCombinations(input,output,i+1);
        }
        //Keypad
        for(int k=0; k<keypad[current_digit].size(); k++){
            letterCombinations(input,output+keypad[current_digit][k],i+1);
        }
        return;
  }
int main(){
    string input;
    cin>>input;

    string output;
    letterCombinations(input,output);
    return 0;
}