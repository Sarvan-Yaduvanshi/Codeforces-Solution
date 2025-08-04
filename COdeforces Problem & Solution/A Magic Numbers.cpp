// Author :  DynamicSarvan
// Created :  2025-08-04 19:26:10
// Problem: A. Magic Numbers
// Contest: Codeforces - Codeforces Round 189 (Div. 2)
// URL: https://codeforces.com/problemset/problem/320/A
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
	
	size_t i = 0;
	bool is_magic = true;
	
	while (i < s.length()) {
		if (i + 2 < s.length() && s.substr(i, 3) == "144") {
			i += 3;
		} else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
			i += 2;
		} else if (s[i] == '1') {
			i += 1;
		} else {
			is_magic = false;
			break;
		}
	}
	
	if (is_magic) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

