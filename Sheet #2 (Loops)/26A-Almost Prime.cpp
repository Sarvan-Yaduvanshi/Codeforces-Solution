// Problem: A. Almost Prime
// Contest: Codeforces - Codeforces Beta Round 26 (Codeforces format)
// URL: https://codeforces.com/problemset/problem/26/A
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

void solve() {
    ll n;
    cin >> n;
    
    vector<int> factors_count(n + 1, 0);
    
    for (int i = 2; i <= n; i++) {
    	if (factors_count[i] == 0) {
    		for (int j = i; j <= n; j += i) {
    			factors_count[j]++;
    		}
    	}
    }
    
    ll almost_prime_count = 0;
    for (int i = 2; i <= n; ++i) {
    	if (factors_count[i] == 2) {
    		almost_prime_count++;
    	}
    }
    
    cout << almost_prime_count << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
