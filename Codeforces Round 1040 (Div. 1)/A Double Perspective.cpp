// Problem: A. Double Perspective
// Contest: Codeforces - Codeforces Round 1040 (Div. 1)
// URL: https://codeforces.com/contest/2129/problem/A
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
#define pb push_back
#define F first
#define S second

struct Seg {
    int l, r, id;
};

void solve() {
    int n;
    cin >> n;
    vector<Seg> seg(n);
    int mx = 2 * n;

    for (int i = 0; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        seg[i] = {u, v, i + 1};
    }

    vi d(mx + 5), cov(mx + 5);
    for (auto &s : seg) {
        d[s.l]++;
        d[s.r]--;
    }
    for (int i = 1; i <= mx; ++i) {
        cov[i] = cov[i - 1] + d[i];
    }

    vector<vector<pii>> pool(mx + 5);
    for (auto &s : seg) {
        pool[s.l].pb({s.r, s.id});
    }

    vi res;
    int ptr = 1;
    priority_queue<pii> q;

    for (int x = 1; x < mx; ) {
        if (!cov[x]) {
            ++x;
            continue;
        }

        int l = x, r = x;
        while (r < mx && cov[r]) ++r;

        int cur = l;
        while (ptr <= cur) {
            for (auto &[b, i] : pool[ptr]) q.push({b, i});
            ++ptr;
        }

        while (cur < r) {
            while (!q.empty() && q.top().F <= cur) q.pop();
            if (q.empty()) break;

            auto [to, id] = q.top(); q.pop();
            res.pb(id);
            cur = to;

            while (ptr <= cur) {
                for (auto &[b, i] : pool[ptr]) q.push({b, i});
                ++ptr;
            }
        }

        x = r;
    }

    cout << sz(res) << endl;
    for (int i = 0; i < sz(res); ++i) {
        if (i) cout << ' ';
        cout << res[i];
    }
    cout << endl;
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
