// Author :  DynamicSarvan
// Created :  2025-08-03 16:28:53
// Problem: U. Some Sums
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
// Memory Limit: 256 MB
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

int sumDigits(int n) {
	ll sum = 0;
	
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	
	return sum;
}

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	
	ll total_sum = 0;
	
	for (int i = 1; i <= n; i++) {
		int curr_digit_sum = sumDigits(i);
		
		if (curr_digit_sum >= a && curr_digit_sum <= b) {
			total_sum += i;
		}
	}
	
	cout << total_sum << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}

