// Author :  DynamicSarvan
// Created :  2025-08-10 20:14:49
// Problem: C. Make it Equal
// Contest: Codeforces - Codeforces Round 1042 (Div. 3)
// URL: https://codeforces.com/contest/2131/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;

#define endl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    vl a(n), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    if (k == 0) {
        multiset<ll> sa(a.begin(), a.end()), sb(b.begin(), b.end());
        cout << (sa == sb ? "YES" : "NO") << endl;
        return;
    }

    auto cls = [&](ll x) {
        ll r = x % k;
        return min(r, (k - r) % k);
    };

    vl ca(n), cb(n);
    for (int i = 0; i < n; i++) ca[i] = cls(a[i]);
    for (int i = 0; i < n; i++) cb[i] = cls(b[i]);

    sort(ca.begin(), ca.end());
    sort(cb.begin(), cb.end());

    cout << (ca == cb ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
