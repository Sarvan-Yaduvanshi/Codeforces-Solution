// Author :  DynamicSarvan
// Created :  2025-08-04 17:18:38
// Problem: A. Fair Playoff
// Contest: Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1535/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
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

void solve() {
  ll t; cin >> t;
  
  while (t--) {
  	ll s1, s2, s3, s4;
  	cin >> s1 >> s2 >> s3 >> s4;
  	
  	ll max1 = max({s1, s2, s3, s4});
  	ll max2;
  	
  	if (max1 == s1) {
  		max2 = max({s2, s3, s4});
  	} else if (max1 == s2) {
  		max2 = max({s1, s3, s4});
  	} else if (max1 == s3) {
  		max2 = max({s1, s2, s4});
  	} else {
  		max2 = max({s1, s2, s3});
  	}
  	
  	ll w1 = max(s1, s2);
  	ll w2 = max(s3, s4);
  	
  	ll wm1, wm2;
  	
  	if (w1 > w2) {
  		wm1 = w1; wm2 = w2;
  	} else {
  		wm1 = w2; wm2 = w1;
  	}
  	
  	if (wm1 == max1 && wm2 == max2) {
  		cout << "YES" << endl;
  	} else {
  		cout << "NO" << endl;
  	}
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

