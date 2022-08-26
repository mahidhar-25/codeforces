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
 int n,t;
 cin>>n>>t;
 string s;
 cin>>s;
 for(int i=0;i<t;i++){
    for(int j=1;j<n;j++){
        if(s[j-1]=='B' && s[j]=='G'){
            s[j] = 'B';s[j-1]='G';j++;
        }
    }
 }
 cout<<s<<"\n";
 
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