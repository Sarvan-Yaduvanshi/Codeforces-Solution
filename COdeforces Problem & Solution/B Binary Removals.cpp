// Author :  DynamicSarvan
// Created :  2025-08-06 09:42:40
// Problem: B. Binary Removals
// Contest: Codeforces - Educational Codeforces Round 106 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1499/B
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
	
	int t; cin >> t;
	
	while (t--) {
		string s; cin >> s;
		
		int i = s.find("11");
		int j = s.rfind("00");
		
		cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();
  
  return 0;
}

