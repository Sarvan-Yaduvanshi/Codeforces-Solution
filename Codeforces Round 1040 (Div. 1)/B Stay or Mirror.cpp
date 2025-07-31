// Problem: B. Stay or Mirror
// Contest: Codeforces - Codeforces Round 1040 (Div. 1)
// URL: https://codeforces.com/contest/2129/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
#define endl '\n'
#define sz(x) (int)(x).size()
#define pb push_back
#define all(x) begin(x), end(x)

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;

    vi pre(n), suf(n);
    ll inv = 0;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] > a[j]) {
                ++inv;
                ++suf[i];
                ++pre[j];
            }

    ll ans = inv;
    for (int i = 0; i < n; ++i) {
        int bal = (n - 1 - i) - suf[i] - pre[i];
        if (bal < 0) ans += bal;
    }

    cout << ans << ' ' << '\n';  // required trailing space
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
