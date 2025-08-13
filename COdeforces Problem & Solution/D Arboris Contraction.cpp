// Author :  DynamicSarvan
// Created :  2025-08-10 20:30:54
// Problem: D. Arboris Contractio
// Contest: Codeforces - Codeforces Round 1042 (Div. 3)
// URL: https://codeforces.com/contest/2131/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
    int n; 
    cin >> n;
    vector<pair<int,int>> e;
    vector<int> deg(n+1), leafNbr(n+1);

    for (int i = 0; i < n-1; i++) {
        int u, v; 
        cin >> u >> v;
        e.push_back({u, v});
        deg[u]++; 
        deg[v]++;
    }

    if (n == 2) {
        cout << 0 << endl;
        return;
    }

    int L = 0; 
    for (int i = 1; i <= n; i++) 
        if (deg[i] == 1) L++;

    for (auto [u, v] : e) {
        if (deg[u] == 1) leafNbr[v]++;
        if (deg[v] == 1) leafNbr[u]++;
    }

    int mx = 0;
    for (int i = 1; i <= n; i++) 
        mx = max(mx, leafNbr[i]);

    cout << (L - mx) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}


