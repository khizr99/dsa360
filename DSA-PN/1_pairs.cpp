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
#define repn(i, n) frn(i, 1, n)//
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

vi pairSum(vi arr, int sum){
 us s; 
 vi result;
 rep(i,sz(arr)){
    int x = sum-arr[i];
    if(s.find(x)!=s.end()){
        result.pb(x);
        result.pb(arr[i]);
        return result;
    }
    s.insert(arr[i]);
 }
return {};
}
int main(){
//array = [10,5,2,3,-6,9,11], s=4, output=[10,-6]
cout<<"................."<<endl;
int n,s; 
cin>>n>>s;
vi vec;
rep(i,n) {
    int t;
    cin>>t;
    vec.pb(t);
}
auto p = pairSum(vec,s);
if(sz(p)==0) cout<<"NO SUCH PAIRS"<<endl;
else cout<<p[0]<<","<<p[1]<<endl;
    return 0;
}

//hojare