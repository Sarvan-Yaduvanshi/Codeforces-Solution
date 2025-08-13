// Author :  DynamicSarvan
// Created :  2025-08-07 19:01:59
// Problem: Number Groups
// Contest: HackerRank - Mathematics - Algebra
// URL: https://www.hackerrank.com/challenges/number-groups/problem
// Memory Limit: 512 MB
// Time Limit: 4000 ms

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
	
	int k; cin >> k;
	
	ll a = (k * (k - 1)) + 1;
	
	ll ans = (k * (2 * a + (k - 1) * 2)) / 2;
	
	cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

