// Author :  DynamicSarvan
// Created :  2025-08-03 15:14:27
// Problem: S. Sum of Consecutive Odd Numbers
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
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
  	ll a, b;
  	cin >> a >> b;
  	ll sum = 0;
  	
  	// if a > b than swap(a, b) a->b, b->a
  	if (a > b) swap(a, b);  // a = 10, b = 4 than swap
  	
  	for (int i = a + 1; i < b; i++) {
  		if (i % 2 != 0) {
  			sum += i;
  		}
  	}
  	
  	cout << sum << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

