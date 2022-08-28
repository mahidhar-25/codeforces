//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits>
#include<math.h>
#include<iomanip>
#include<vector>
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
 int n,p; cin>>n>>p;
 vector<vi>a(n,vi(n,0));
 for(int i=0;i<n;i++){
    a[i][i] = p;
 }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j]<<" ";
    }
    cout<<"\n";
 }
 
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