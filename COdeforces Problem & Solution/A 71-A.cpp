// Author :  DynamicSarvan
// Created :  2025-08-06 13:09:48
// Problem: A. Way Too Long Words
// Contest: Codeforces - Codeforces Beta Round 65 (Div. 2)
// URL: https://codeforces.com/problemset/problem/71/A
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
	int tc; cin >> tc;
	
	while (tc--) {
		string s; cin >> s;
		int n = s.size();
		
		if (n > 10) {
			cout << s[0] << n - 2 << s[n - 1] << endl;
		} else {
			cout << s << endl;
		}
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

