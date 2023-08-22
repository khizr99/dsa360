#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v)) //Sorting of vector
typedef unordered_set<int> us;

int MinimumSwap(vi arr){
    int ans=0,n=arr.size();
    pii ap[n];
    //Storing the current indices
    for(int i=0; i<n; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    //Sorting
    sort(ap,ap+n);

    //Building the main logic of the question(Cycling)
    vector<bool> visited(n,false);

    for(int i=0; i<n; i++){
        //if element is visited or element is in right position
        int old_position = ap[i].second;
        if(visited[i]==true || old_position==i) continue;

        //visiting the element (index) for first time
        int node = i;
        int cycle = 0;
        while(!visited[node]){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle+=1;
        }
        ans+= cycle-1;
    }
    return ans;
}
int main(){
    int n,temp;
    cin>>n;
    vi arr;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.pb(temp);
    }
     cout<<MinimumSwap(arr)<<endl;

    return 0;
}