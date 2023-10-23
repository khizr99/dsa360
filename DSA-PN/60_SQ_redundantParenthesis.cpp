#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

bool checkRedundant(string str){
    stack<char>st;

    for(auto ch: str){
        if(ch!= ')') st.push(ch);
        else{

            bool operatorFound = false;
            while(!st.empty() && st.top()!='('){
                char top = st.top();
                if(top=='+' || top =='-' || top =='*' || top=='/') operatorFound = true;
                st.pop();
            }
            st.pop();
            if(operatorFound==false) return true;
        }
    }
    return false;
}

int main(){
    string inp1 = "((a+b))";
    string inp2 = "((a+b)*5)";
    cout<<checkRedundant(inp1)<<endl;
    cout<<checkRedundant(inp2);
    return 0;
}