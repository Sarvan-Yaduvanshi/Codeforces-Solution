// Author :  DynamicSarvan
// Created :  2025-08-07 20:09:33
// Problem: A. Mix Mex Max
// Contest: Codeforces - Atto Round 1 (Codeforces Round 1041, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2127/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int &x : a) cin >> x;

  int val = -1;
  bool valid = true;

  for (int x : a) {
    if (x == 0) {
      valid = false;
      break;
    }
    if (x > 0) {
      if (val == -1) val = x;
      else if (x != val) {
        valid = false;
        break;
      }
    }
  }

  cout << (valid ? "YES" : "NO") << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
