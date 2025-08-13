// Author :  DynamicSarvan
// Created :  2025-08-13 01:59:52
// Problem: Problem 1. Fence Painting
// Contest: USACO - USACO 2015 December Contest, Bronze
// URL: https://usaco.org/index.php?page=viewproblem2&cpid=567
// Memory Limit: 256 MB
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
	ll a, b, c, d; cin >> a >> b >> c >> d;
	
	cout << min((max(b, d) - min(a, c)), (b - a + d - c)) << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

