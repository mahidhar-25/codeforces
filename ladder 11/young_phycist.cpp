#include<iostream>
#include<string>
#include<limits>
#include<math.h>
#include<iomanip>
#include<vector>
#pragma GCC optimize("Ofast")
using namespace std;
#define ar array
#define ll long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define all(x) x.begin(),x.end()
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void solve(){
    int n,sumx=0,sumy=0,sumz=0,sum=0;
    cin>>n;
    vector<vi>a(n , vi(3));
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        sumx += a[i][0]; sumy+=a[i][1]; sumz+=a[i][2]; sum = sumx + sumy + sumz;
    }
    if(sum==0 && sumx==0 && sumy==0 && sumz==0 ){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
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