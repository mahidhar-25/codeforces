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
 string s,ans=""; cin>>s;
 int flag=0;
 for(int i=0;i<s.size();i++){
    if(flag==0 && s[i]=='.'){
        ans += '0'; 
    }else if(flag == 1 && s[i]=='.'){
        ans += '1'; flag=0;
    }else if(flag==0 && s[i]=='-'){
        flag=1;
    }else if(flag==1 && s[i]=='-'){
        ans += '2'; flag=0;
    }
 }
 cout<<ans<<"\n";
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