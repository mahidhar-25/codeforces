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
 int n,m;cin>>n>>m;
vector<vector<char>>a(n+1,vector<char>(m+1));
vi x(n,0),y(m,0);
vector<bool>s_x(n,false),s_y(m,false);
vector<vector<bool>>b(n,vector<bool>(m,false));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        if(a[i][j]=='.'){
            x[i]++; y[j]++;
        }else{
            s_x[i] = s_y[j] = true;
        }

    }
}
int ans=0;
for(int i=0;i<n;i++){
        if(!s_x[i] && x[i]>0){
          for(int j=0;j<m;j++){
            if(a[i][j]=='.' && !b[i][j]){
                b[i][j] = true; y[j]--;x[i]--; ans++;
            }
          }
        }
    
}
for(int i=0;i<m;i++){
        if(!s_y[i] && y[i]>0){
          for(int j=0;j<n;j++){
            if(a[j][i]=='.' && !b[j][i]){
                b[j][i] = true; y[i]--;x[j]--; ans++;
            }
          }
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