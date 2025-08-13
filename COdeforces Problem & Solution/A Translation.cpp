// Author :  DynamicSarvan
// Created :  2025-08-12 17:25:21
// Problem: A. Translation
// Contest: Codeforces - Codeforces Beta Round 40 (Div. 2)
// URL: https://codeforces.com/problemset/problem/41/A
// Memory Limit: 256 MB
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
	string s, t;
	cin >> s >> t;
	
	reverse(t.begin(), t.end());
	
	cout << (s == t ? "YES" : "NO");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  
  return 0;
}

