#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

int highestMountain(vi arr){
    int n = arr.size(), largest = 0;

    for(int i=1; i<=n-2;){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            //Then
            int cnt = 1;
            int j=i;
            //counting backwards(left)
            while(j>=1&&arr[j]>arr[j-1]){
                j--;
                cnt++;
            }
            //counting forward(right)
            while(i<=n-2&&arr[i]>arr[i+1]){
                i++;
                cnt++;
            }
            largest = max(largest,cnt);
        }
        else{
            i++;
        }
    }
    return largest;
}
int main(){
    vi arr;
    int n;
    cout<<"......................"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.pb(temp);
    }
        cout<<highestMountain(arr)<<endl;
 
}