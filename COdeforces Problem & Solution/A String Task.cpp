// Author :  DynamicSarvan
// Created :  2025-08-12 17:36:56
// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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

bool is_vowel(char ch) {
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

void solve() {
	string s; cin >> s;
	
	string result_str = "";
	for (int ch : s) {
		char lower_ch = tolower(ch);
		
		if (!is_vowel(lower_ch)) {
			result_str += '.';
			result_str += lower_ch;
		}
	}
	
	cout << result_str << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

