// Author :  DynamicSarvan
// Created :  2025-08-12 16:15:03
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
	
	string r;
	for (size_t i = 0; i < s.size(); i += 2)
		r += s[i];
	
	sort(r.begin(), r.end());
	
	for (size_t i = 0; i < r.size() - 1; i++)
		cout << r[i] << "+";
	cout << r.back() << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();
  
  return 0;
}

