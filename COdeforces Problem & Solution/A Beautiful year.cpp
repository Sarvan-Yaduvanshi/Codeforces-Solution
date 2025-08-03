// Author :  DynamicSarvan
// Created :  2025-08-03 21:53:11
// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round 166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
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
	int y; cin >> y;
	y++;
	
	while (true) {
		string temp = to_string(y);
		set<char> st;
		bool f1 = true;
		
		for (auto &i : temp) {
			if (st.count(i)) {
				f1 = false;
				break;
			}
			st.insert(i);
		}
		if (f1) {
			cout << y;
			return;
		}
		y++;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

