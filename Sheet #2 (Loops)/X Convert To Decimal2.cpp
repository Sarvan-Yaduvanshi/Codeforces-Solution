// Author :  DynamicSarvan
// Created :  2025-08-03 18:12:21
// Problem: X. Convert To Decimal 2
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
// Memory Limit: 64 MB
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
  ll n;
  cin >> n;
  
  int ones_count = 0;
  ll temp_n = n;
  
  while (temp_n > 0) {
  	if ((temp_n & 1) == 1) {
  		ones_count++;
  	}
  	temp_n = temp_n >> 1;
  }
  
  ll result = (1LL << ones_count) - 1;
  cout << result << endl;
  
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

