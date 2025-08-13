// Author :  DynamicSarvan
// Created :  2025-08-13 01:43:58
// Problem: Weird Algorithm
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1068
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
	
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 0) n /= 2;
		else n = n * 3 + 1;
	}
	
	cout << n << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

