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
 vector<vector<bool>>a(3+2,vector<bool>(3+2,true));
 vector<vi>b(3+1,vi(3+1));
 for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        cin>>b[i][j];
    }
 }

  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        if(b[i][j]%2==1){
            a[i][j] = !a[i][j];
            a[i-1][j] = !a[i-1][j];
            a[i+1][j] = !a[i+1][j];
            a[i][j-1] = !a[i][j-1];
            a[i][j+1] = !a[i][j+1];
        }
    }
  }

  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        if(a[i][j]){
            cout<<1;
        }else{
            cout<<0;
        }
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