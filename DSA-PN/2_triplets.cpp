#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef unordered_set<int> us;
#define fr(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) //fr = for
#define frn(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define frd(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define frsq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define frc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define freach(a, b) for (auto&(a) : (b))
#define rep(i, n) fr(i, 0, n)  //rep is simple for loop
#define repn(i, n) frn(i, 1, n)
#define sqr(x) ((LL)(x) * (x)) //sqr  = square
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define sz(v) (int)v.size() //sz = size
#define sort(v) sort(all(v))
#define rev(v) reverse(all(v)) // rev = reverse
#define sorta(arr, sz) sort(alla(arr, sz))
#define reva(arr, sz) reverse(alla(arr, sz))
#define tc(t) while (t--)

//Using Sorting and two pointer approach
vvi triplet(vi arr, int targetSum){
    vvi result;
    sort(arr); //sorting the vector
    int n = sz(arr);
    rep(i,n-2){ //Maximum value of i could be only n-3.
        int j=i+1;
        int k=n-1;
    //Using Two pointer approache.
    while(j<k){
        int current_sum = arr[i];
        current_sum+=arr[j];
        current_sum+=arr[k];
        if(current_sum==targetSum){
            result.pb({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        else if(current_sum<targetSum) j++;
        else k--;   
    }
    }
    return result;
}

int main(){
    cout<<"............................"<<endl;
    vi arr;
    int n,sum;
    cin>>n>>sum;
    rep(i,n){
        int temp;
        cin>>temp;
        arr.pb(temp);
    }
    auto p = triplet(arr, sum);
    if(p.size()==0) cout<<"NO SUCH TRIPLETS EXITS"<<endl;
    else{
 freach(v,p){
        freach(no,v){
            cout<<no<<",";
        }
        cout<<endl;
       }
    }
      
    
    return 0;
}