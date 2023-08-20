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
#define sort(v) sort(ALL(v))
#define rev(v) reverse(ALL(v)) // rev = reverse
#define sorta(arr, sz) sort(ALLA(arr, sz))
#define reva(arr, sz) reverse(ALLA(arr, sz))
#define tc(t) while (t--)

vvi triplet(vi arr, int sum){
    vvi result;
    us s;
    rep(i,sz(arr)){
        int newSum = sum-arr[i];
        rep(j,sz(arr)){
            j=i; ++j;
            int x = newSum-arr[j];
            if(s.find(x)!=s.end()){
                vi v;
                v.pb(arr[i]); v.pb(arr[j]); v.pb(x);
                result.pb(v);

            }//..

        }
    }
}

int main(){
    cout<<"............................"<<endl;
    vi arr;
    int n,sum;
    rep(i,n){
        int temp;
        cin>>temp;
        arr.pb(temp);
    }
    auto p = triplet(arr, sum);
    if(p.size()==0) cout<<"NO SUCH TRIPLET EXISTS"<<endl;
    else{
        rep(i,p.size()){
            rep(j,p[i].size()){
                cout<<p[i][j]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}