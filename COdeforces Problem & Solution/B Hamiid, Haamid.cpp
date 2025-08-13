// Author :  DynamicSarvan
// Created :  2025-08-07 22:53:08
// Problem: B. Hamiiid, Haaamid... Hamid?
// Contest: Codeforces - Atto Round 1 (Codeforces Round 1041, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2127/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve() {
  int n, x;
  cin >> n >> x;
  string s;
  cin >> s;

  int lw = 0, rw = 0;
  for (int i = 0; i < x - 1; ++i)
    if (s[i] == '#') ++lw;

  for (int i = x; i < n; ++i)
    if (s[i] == '#') ++rw;

  ll ans = 0;
  if (x == 1 || x == n) {
    ans = 1;
  } else if (lw == 0 && rw == 0) {
    ans = 1;
  } else if (lw == 0 || rw == 0) {
    ans = 2;
  } else {
    ans = 2LL * min(lw, rw) + 1;
  }

  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) solve();

  return 0;
}
