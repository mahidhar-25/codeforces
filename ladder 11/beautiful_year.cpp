//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits>
#include<math.h>
#include<iomanip>
#include<vector>
#include<set>
//#pragma GCC optimize(`Ofast`)
using namespace std;
#define ar array
#define ll long long int
#define vi vector<int>
#define all(x) x.begin(),x.end()
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
 
void solve(){
 
 int n,r,x; cin>>n;
vi a;
set<int>s;


do{
     x = ++n;
    a.clear();s.clear();
    while(x>0){
        r = x%10;a.push_back(r);s.insert(r);
        x = x/10;
    }
 } while(s.size()!=a.size());
 cout<<n<<"\n";
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve();
   }
    return(0);
}