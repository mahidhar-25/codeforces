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
 int n,mini=INT_MAX,maxi=INT_MIN,max_index,min_index,ans=0; cin>>n;
 vi a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
    if(mini >= a[i]){
        min_index = i; mini = a[i];
    }
    if(maxi < a[i]){
        max_index =  i; maxi = a[i];
    }
 }
 if(n==0 || n==1){
    cout<<0;return;
 }
 if(n==2){
    if(a[0]>=a[1]){
        cout<<0;
    }else{
       cout<<1;
    }
    return;
 }

 if(max_index > min_index){
    ans = (max_index - 0) + (n-min_index-1) - 1;
 }else{
    ans = (max_index - 0) + (n-min_index-1);
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