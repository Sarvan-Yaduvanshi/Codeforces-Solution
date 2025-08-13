// Author :  DynamicSarvan
// Created :  2025-08-13 00:29:29
// Problem: Next Prime
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/3396
// Memory Limit: 512 MB
// Time Limit: 1000 ms

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

bool isPrime(ll n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	
	for (ll i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	
	return true;
}
 ll nextPrime(ll n) {
 	ll nextNum = n + 1;
 	
 	while (true) {
 		if (isPrime(nextNum)) return nextNum;
 		nextNum++;
 	}
 }
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 1;
  cin >> tc;
  while (tc--) {
  	ll n; cin >> n;
    cout << nextPrime(n) << endl;
  }

  return 0;
}

