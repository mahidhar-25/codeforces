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
 
 string s; cin>>s;
 int COUNT=0,count=0;
 for(int i=0;i<s.size();i++){
    if(isupper(s[i]))COUNT++;
    else if(islower(s[i]))count++;
 }
 if(COUNT>count){
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
 }else{
        for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
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