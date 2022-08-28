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
 
 int n,x=0;cin>>n;
 set<char>s;
 char c;
 for(int i=0;i<n;i++){
    string p; cin>>p;
    for(int j=0;j<p.size();j++){
        if(p[j]!='X'){
         c = p[j];
        }
    }
    if(c=='+')x++;
    if(c=='-')x--;
 }
 cout<<x<<endl;
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