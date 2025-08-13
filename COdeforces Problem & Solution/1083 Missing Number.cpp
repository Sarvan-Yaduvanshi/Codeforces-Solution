// Author :  DynamicSarvan
// Created :  2025-08-13 17:34:56
// Problem: Missing Number
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1083
// Memory Limit: 512 MB
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
	
	ll given_num_sum = 0;
	for (int i = 1, k; i < n; i++) {
		cin >> k; given_num_sum += k;
	}
	
	ll total_sum = n * (n + 1) / 2;
	cout << total_sum - given_num_sum << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

