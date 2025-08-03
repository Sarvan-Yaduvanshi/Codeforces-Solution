// Author :  DynamicSarvan
// Created :  2025-08-03 22:47:05
// Problem: A - Full House
// Contest: AtCoder - LINE  Verda Programming Contest（AtCoder Beginner Contest 263）
// URL: https://atcoder.jp/contests/abc263/tasks/abc263_a
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
	vector<ll> freq(14, 0);
	
	for (int i = 0; i < 5; i++) {
		ll x; cin >> x;
		freq[x]++;
	}
	
	for (int i = 1; i <= 13; i++) {
		for (int j = 1; j <= 13; j++) {
			if (freq[i] == 3 && freq[j] == 2) {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	
	cout << "No" << endl;
	
	
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

