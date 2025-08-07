// Author :  DynamicSarvan
// Created :  2025-08-05 23:50:35
// Problem: A. Blackboard Game
// Contest: Codeforces - Codeforces Round 1034 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2123/A
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
		ll n; cin >> n;
		
		if (n % 4 == 0) cout << "Bob" << endl;
		else {
			cout << "Alice" << endl;
		}
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

