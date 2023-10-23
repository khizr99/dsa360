#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

bool isBalanced(string str){

    stack<char>st;
    for(auto ch:str){

        switch(ch){

            case '(':
            case '[':
            case '{': st.push(ch);
                        break;
            
            case ')': if(!st.empty() && st.top()=='('){
                            st.pop();
                            }
                            else{
                                return false;
                            }
                            break;
            
            case ']': if(!st.empty() && st.top()=='['){
                            st.pop();
                            }
                            else{
                                return false;
                            }
                            break;

            case '}': if(!st.empty() && st.top()=='{'){
                            st.pop();
                            }
                            else{
                                return false;
                            }
                            break;
        }
    }
   if(st.empty()) return true;
   return false;
}
int main(){

    string inp1 = "((a+b)*x-d)";
    string inp2 = "((a+b])+c)*(d-e)";
    cout<<isBalanced(inp1)<<endl;
    cout<<isBalanced(inp2);
    return 0;
}