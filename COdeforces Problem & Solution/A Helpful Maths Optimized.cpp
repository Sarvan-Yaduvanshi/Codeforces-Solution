// Author :  DynamicSarvan
// Created :  2025-08-12 16:43:33
// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
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
	
	int c1 = 0, c2 = 0, c3 = 0;
	for (size_t i = 0; i < s.size(); i += 2) {
		if (s[i] == '1') c1++;
		if (s[i] == '2') c2++;
		if (s[i] == '3') c3++;
	}
	
	string t;
	for (int i = 0; i < c1; i++) t += "1+";
	for (int i = 0; i < c2; i++) t += "2+";
	for (int i = 0; i < c3; i++) t += "3+";
	
	t.pop_back();
	
	cout << t << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

