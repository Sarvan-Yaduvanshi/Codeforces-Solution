// Author :  DynamicSarvan
// Created :  2025-08-05 11:48:17
// Problem: A. System of Equations
// Contest: Codeforces - Codeforces Round 131 (Div. 2)
// URL: https://codeforces.com/problemset/problem/214/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
	ll n, m; cin >> n >> m;
	int cnt = 0;
	
	for (int a = 0; a * a <= n; a++) {
		ll b = n - (a * a);
		
		if (a + (b * b) == m) {
			cnt++;
		}
	}
	
	cout << cnt << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

