// Author :  DynamicSarvan
// Created :  2025-08-08 23:21:40
// Problem: C. Cool Partition
// Contest: Codeforces - Codeforces Round 1029 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2117/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

void solve() {
    int n;
    cin >> n;
    vi arr(n + 1);
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    set<int> cur, nextSet;
    int segments = 0;

    for (int i = 1; i <= n; ++i) {
        cur.erase(arr[i]);
        nextSet.insert(arr[i]);
        if (cur.empty()) {
            swap(cur, nextSet);
            ++segments;
        }
    }
    cout << segments << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
