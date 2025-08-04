// Author :  DynamicSarvan
// Created :  2025-08-04 18:36:56
// Problem: A. Fair Playoff
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/A
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
	int s[4];
	cin >> s[0] >> s[1] >> s[2] >> s[3];
	
	int winner1 = max(s[0], s[1]);
	int winner2 = max(s[2], s[3]);
	
	sort(s, s + 4);
	
	int top_skill = s[3];
    int second_top_skill = s[2];
	
	if (max(winner1, winner2) == top_skill && min(winner1, winner2) ==  second_top_skill) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}

