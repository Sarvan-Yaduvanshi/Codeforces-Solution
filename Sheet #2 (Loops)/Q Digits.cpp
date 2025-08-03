// Author :  DynamicSarvan
// Created :  2025-08-03 15:37:04
// Problem: Q. Digits
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
// Memory Limit: 256 MB
// Time Limit: 1000 ms


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
  int T;
  cin >> T;
  
  while (T--) {
  	ll n;
  	cin >> n;
  	
  	// edge case where is n is 0
  	if (n == 0) cout << 0;
  	else {
  		while (n != 0) {
  			ll rem = n % 10;
  			cout << rem << " ";
  			n /= 10;
  		}
  	}
  	cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

