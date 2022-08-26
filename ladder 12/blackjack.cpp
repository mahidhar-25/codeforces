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
 
 int x,ans=0; cin>>x;
 int n=x-10;

 if(n<=9 && n>=1 ){
    ans += 4;
 }else if(n==10){
    ans += 15;
 }else if(n==11){
    ans += 4;
 }else{
    ans +=0;
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