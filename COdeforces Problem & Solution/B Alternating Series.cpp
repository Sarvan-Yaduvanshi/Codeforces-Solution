// Author :  DynamicSarvan
// Created :  2025-08-10 20:25:37
// Problem: B. Alternating Series
// Contest: Codeforces - Codeforces Round 1042 (Div. 3)
// URL: https://codeforces.com/contest/2131/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve() {
    ll n; 
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll x = (i % 2 ? -1 : (i == n ? 2 : 3));
        cout << x << (i < n ? ' ' : '\n');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}
