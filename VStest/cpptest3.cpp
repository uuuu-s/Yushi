#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(void)
{
    int n;
    ll ans;
    ans = 0;
    cin >> n;
    for (int i=1;i<n;++i){
        int tar = n-i;
        int u = sqrt(tar) + 1;
        for(int j=1;j<u;++j){
            if (tar % j == 0){
                if(j*j==tar){
                    ans += 1;
                }
                else{
                    ans += 2;
                }
            }
        }
    }
    cout << ans << endl; 
}