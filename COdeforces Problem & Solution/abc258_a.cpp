// Author :  DynamicSarvan
// Created :  2025-08-03 22:13:33
// Problem: A - When?
// Contest: AtCoder - AtCoder Beginner Contest 258
// URL: https://atcoder.jp/contests/abc258/tasks/abc258_a
// Memory Limit: 1024 MB
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
	
	int k; cin >> k;
	
	int hour = 21, min = 0;
	
	while (k--) {
		min++;
		if (min == 60) {
			min = 0;
			hour++;
		}
	}
	cout << hour << ":";
	if (min <= 9) cout << '0';
	cout << min;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

