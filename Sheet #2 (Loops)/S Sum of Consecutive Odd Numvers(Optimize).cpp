// Author :  DynamicSarvan
// Created :  2025-08-03 15:20:30
// Problem: S. Sum of Consecutive Odd Numbers
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
// Memory Limit: 256 MB
// Time Limit: 1000 ms


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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
  int T;
  cin >> T;
  
  while (T--) {
  	ll x, y;
  	cin >> x >> y;
  	
  	ll start = min(x, y);
  	ll end = max(x, y);
  	
  	ll end_term = end / 2;
  	ll sum_up_to_end = end_term * end_term;
  	
  	ll start_term = (start + 1) / 2;
  	ll sum_up_to_start = start_term * start_term;
  	
  	ll total_sum = sum_up_to_end - sum_up_to_start;
  	
  	cout << total_sum << endl;

  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

