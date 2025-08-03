// Author :  DynamicSarvan
// Created :  2025-08-03 16:53:32
// Problem: V. PUM
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
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
  int n;
  cin >> n;
  
  int current_number = 1;
  
  for (int i = 1; i <= n; i++) {
  	cout << current_number << " ";
  	cout << current_number + 1 << " ";
  	cout << current_number + 2 << " ";
  	cout << "PUM" << endl;
  	
  	current_number += 4;

  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

