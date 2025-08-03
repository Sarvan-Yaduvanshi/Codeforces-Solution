// Author :  DynamicSarvan
// Created :  2025-08-03 16:08:19
// Problem: R. Sequence of Numbers and Sum
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
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
	ll n, m;
	
	while (cin >> n >> m) {
        if (n <= 0 || m <= 0) {
            break;
        }

        ll start = min(n, m);
        ll end = max(n, m);
        ll sum = 0;

        for (long long i = start; i <= end; i++) {
            cout << i << " ";
        }

        ll num_of_terms = end - start + 1;
        sum = (num_of_terms * (start + end)) / 2;
        
        cout << "sum =" << sum << endl;
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();

  return 0;
}

