// compile：g++ cpptest.cpp
// 実行ファイルをつくる g++ -o cpptest .\cpptest.cpp
// Run:.\cpptest.exe

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int judge(int nax){
  if (nax>=10) cout << "more than 10" << endl;
  else cout << "not more than 10" << endl;
  return 0;
}

int main() {
  ll n;
  cin >> n;
  vector<int> math(n);
  vector<int> eng(n);
  rep(i,n) cin >> math[i];
  rep(i,n) cin >> eng[i];
  n++;
  math.push_back(4);
  eng.push_back(5);
  rep(i,n) cout << math[i] + eng[i] << endl;
  int nax = 0;
  rep(i,n) nax = max(nax, math[i] + eng[i]);
  judge(nax);
  return 0;
}
