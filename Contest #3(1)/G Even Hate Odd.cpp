// Author :  DynamicSarvan
// Created :  2025-08-03 18:43:55
// Problem: G. Even Hate Odd
// Contest: Codeforces - Contest #3.1
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
// Memory Limit: 256 MB
// Time Limit: 5000 ms

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
  
    int even_count = 0;
  
    for (int i = 0; i < n; i++) {
  		int number;
  		cin >> number;
  	
  		if (number % 2 == 0) {
  			even_count++;
  		}
  	
  	}
	if (n % 2 != 0) {
  		cout << -1 << endl;
  		return;
    }
	// if total element of elemnt is even 
  	int target = n / 2;
  	
  	int moves = abs(even_count - target);
  	
  	cout << moves << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}