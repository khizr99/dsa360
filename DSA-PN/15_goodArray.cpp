#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

bool isGoodArray(vector<int>& nums) {
        int temp = nums[0];
        int gcd = 0;
        int n = nums.size();
        for(int i=1; i<n; i++){
            gcd = __gcd(temp,nums[i]);
            temp = gcd;
        }
       if(n==1 && nums[0]==1) return true;
       else if(gcd==1) return true;
     else return false;
    }

    int main(){
        int n,temp;
        cin>>n;
        vi arr;
        for(int i=0; i<n; i++){
            cin>>temp;
            arr.pb(temp);
        }
        cout<<isGoodArray(arr)<<endl;
        return 0;
    }