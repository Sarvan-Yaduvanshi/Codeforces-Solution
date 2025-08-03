// Author :  DynamicSarvan
// Created :  2025-08-03 19:29:21
// Problem: A. Theatre Square
// Contest: Codeforces - Codeforces Beta Round 1
// URL: https://codeforces.com/problemset/problem/1/A
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
  ll n, m, a;
  cin >> n >> m >> a;
  
  ll x = (n + a - 1) / a;
  ll y = (m + a - 1) / a;
  
  cout << x * y << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

