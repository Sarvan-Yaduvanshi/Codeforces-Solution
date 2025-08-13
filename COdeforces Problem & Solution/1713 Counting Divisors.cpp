// Author :  DynamicSarvan
// Created :  2025-08-13 17:56:16
// Problem: Counting Divisors
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1713
// Memory Limit: 512 MB
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

const int MAXN = 1000001; 
int divisors[MAXN];

void precompute() {
	for (int i = 1; i < MAXN; i++) {
		for (int j = i; j < MAXN; j += i) divisors[j]++;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc; cin >> tc;
  
  while (tc--) {
  	int num; cin >> num;
  	
  	cout << precompute(num) << endl;
  }

  return 0;
}

