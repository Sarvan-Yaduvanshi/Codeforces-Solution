// Author :  DynamicSarvan
// Created :  2025-08-12 18:26:40
// Problem: Increasing Array
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1094
// Memory Limit: 512 MB
// Time Limit: 1000 ms

#pragma GCC optimize("O3,unroll-loops")
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
	int n; cin >> n;
	
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	ll moves = 0;
	
	for (ll i = 1; i < n; i++) {
		if (a[i] > a[i - 1]) continue;
		else {
			moves += a[i - 1] - a[i];
			a[i] = a[i-1] + 1;
		}
	}
	
	cout << moves << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

