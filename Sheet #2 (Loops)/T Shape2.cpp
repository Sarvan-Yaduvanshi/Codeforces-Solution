// Author :  DynamicSarvan
// Created :  2025-08-03 16:14:33
// Problem: T. Shape2
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
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
  ll n;
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
  	for (int j = 0; j < n - i; j++) {
  		cout << " ";
  	}
  	
  	for (int k = 0; k < (2 * i) - 1; k++) {
  		cout << "*";
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

