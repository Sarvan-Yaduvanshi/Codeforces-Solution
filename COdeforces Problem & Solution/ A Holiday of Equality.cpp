// Author :  DynamicSarvan
// Created :  2025-08-05 09:55:39
// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round 392 (Div. 2)
// URL: https://codeforces.com/problemset/problem/758/A
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
	
	ll sum_of_welfares = 0;
	int max_welfare = 0;
	
	for (int i = 0; i < n; i++) {
		int curr_welfare;
		cin >> curr_welfare;
		sum_of_welfares += curr_welfare;
		if (curr_welfare > max_welfare) {
			max_welfare = curr_welfare;
		}
	}
	
	// edge case if n = 1 than return 0
	if (n == 1) {
		cout << 0 << endl;
		return;
	}
	
	ll total_cost = (ll)n * max_welfare - sum_of_welfares;
	cout << total_cost << endl;
	
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

