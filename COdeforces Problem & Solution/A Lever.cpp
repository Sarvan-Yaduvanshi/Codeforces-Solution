// Author :  DynamicSarvan
// Created :  2025-08-10 20:08:36
// Problem: A. Lever
// Contest: Codeforces - Codeforces Round 1042 (Div. 3)
// URL: https://codeforces.com/contest/2131/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
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

int calc_iterations(vector<int> a, vector<int> b, int n) {
    int iterations = 0;
    while (true) {
        iterations++;
        
        bool step1_executed = false;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                a[i]--;
                step1_executed = true;
                break;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                a[i]++;
                break;
            }
        }
        if (!step1_executed) break;
    }
    return iterations;
}

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    cout << calc_iterations(a, b, n) << endl;
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
