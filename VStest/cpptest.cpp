// compile：g++ cpptest.cpp
// g++ -o cpptest ./cpptest.cpp
// Run:.\cpptest.exe

// compile & make file: g++ -o c cpptest.cpp
// Run: .\cpptest.cpp

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> al(h,vector<int>(w));
    rep(i,h)rep(j,w){
        cin >> al[i][j];
    } 
    int mn = 999999;
    rep(i,h)rep(j,w){
        mn = min(mn,al[i][j]);
    }
    int ans = 0;
    rep(i,h)rep(j,w){
        ans += al[i][j]-mn;
    }
    cout << ans << endl;
    return 0;
}
