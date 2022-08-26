//#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<limits.h>
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
 int n,k,f,t,maxi=INT_MIN,ans=INT_MIN; cin>>n>>k;
 for(int i=0;i<n;i++){
    cin>>f>>t;
    if(t>k){
        maxi = f-(t-k);
    }else{
        maxi = f;
    }
    if(ans < maxi){
        ans=maxi;
    }
 }
 cout<<ans<<endl;
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