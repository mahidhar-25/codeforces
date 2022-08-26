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
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << "0 " << x + y << " " << y + x << " 0";
    else if (x > 0 && y < 0) cout << "0 " << y - x << " " << x - y << " 0";
    else if (x < 0 && y < 0) cout << x + y << " 0 0 " << y + x;
    else if (x < 0 && y > 0) cout << x - y << " 0 0 " << y - x;
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