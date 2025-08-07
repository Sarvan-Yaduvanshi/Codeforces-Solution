// Author :  DynamicSarvan
// Created :  2025-08-04 23:44:35
// Problem: A. Equal Subsequences
// Contest: Codeforces - Codeforces Round 1030 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2118/A
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
	int t; cin >> t;
	
	while (t--) {
		ll n, k; cin >> n >> k;
		
		for (int i = 0; i < k; i++) cout << "1";
		for (int j = k; j < n; j++) cout << "0";
		cout << endl;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

