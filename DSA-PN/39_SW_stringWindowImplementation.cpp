#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define pb push_back
typedef unordered_set<int> us;

string find_windows(string s, string p){
    
    //Array as a Freq Map or you can use HashMap
    int FP[256] = {0};
    int FS[256] = {0};
    
    for(int i=0; i<p.length(); i++) FP[p[i]]++;
        
    //Sliding Window Algorithm
    int cnt = 0;
    int start = 0; //left contraction
    int start_idx = -1; //start index for best window
    int min_so_far = INT_MAX; //large number
    int window_size;

    for(int i=0; i<s.length(); i++){
        //Expanding window including current character
        char ch = s[i];

        FS[ch]++;

        //Count how many characters have been matched till now(string and pattern)
        if(FP[ch]!=0 && FS[ch]<=FP[ch]){
            cnt += 1;
        }

        //another thing
        //if all characters of the pattern are found in the current window then you can start contracting
        if(cnt==p.length()){

            //start contracting from the left to remove the unwanted characters(i.e. either the character is not present in the pattern or frequency of the character is higher then required)
            while(FP[s[start]]==0 || FS[s[start]]>FP[s[start]]){
                FS[s[start]]--;
                start++;
            }
            //note the window size
            window_size = i-start +1;
            if(window_size < min_so_far){
                min_so_far = window_size;
                start_idx = start;
            }

        }

    }
    if(start_idx==-1){
        return "NO window found";
    }
    return s.substr(start_idx, min_so_far);
}

int main() {
    
    string s,p;
    cin>>s>>p;
    
    cout<<find_windows(s,p)<<endl;
    return 0;
}

