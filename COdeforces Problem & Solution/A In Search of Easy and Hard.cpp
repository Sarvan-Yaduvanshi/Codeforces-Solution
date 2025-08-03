// Author :  DynamicSarvan
// Created :  2025-08-03 22:38:13
// Problem: A. In Search of an Easy Problem
// Contest: Codeforces - Technocup 2019 - Elimination Round 1
// URL: https://codeforces.com/problemset/problem/1030/A
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
	ll n; cin >> n;
	
	ll count_of_1 = 0;
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		count_of_1 += (x == 1);
	}
	
	if (count_of_1) cout << "HARD";
	else cout << "EASY";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

