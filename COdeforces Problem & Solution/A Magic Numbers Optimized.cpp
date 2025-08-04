// Author :  DynamicSarvan
// Created :  2025-08-04 23:12:30
// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round 189 (Div. 2)
// URL: https://codeforces.com/contest/320/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
	string s; cin >> s;
	
	for (char c : s) {
		if (c != '1' && c != '4') {
			cout << "NO" << endl;
			return;
		}
	}
	
	if (s[0] != '1') {
		cout << "NO" << endl;
		return;
	}
	
	if (s.find("444") != string::npos) {
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
	
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

