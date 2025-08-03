// Author :  DynamicSarvan
// Created :  2025-08-03 23:23:35
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
	vector<ll> arr(5, 0);
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());
	
	if (arr[0] == arr[2] && arr[3] == arr[4] && arr[2] != arr[3]) {
		cout << "Yes";
	} else if (arr[0] == arr[1] && arr[2] == arr[4] && arr[1] != arr[2]) {
		cout << "Yes";
	} else cout << "No";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

