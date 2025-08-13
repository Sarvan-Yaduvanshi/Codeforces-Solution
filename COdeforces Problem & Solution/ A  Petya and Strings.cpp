// Author :  DynamicSarvan
// Created :  2025-08-12 15:37:39
// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round 85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A?csrf_token=8634a213b37267cac7ee76029ffbd25c
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
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
	string s1, s2; 
	cin >> s1 >> s2;
	
	for (size_t i = 0; i < s1.size(); ++i) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
	
	if (s1 > s2) cout << 1 << endl;
	else if (s1 < s2) cout << -1 << endl;
	else cout << 0 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

