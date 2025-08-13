// Author :  DynamicSarvan
// Created :  2025-08-07 21:02:40
// Problem: C. Trip Shopping
// Contest: Codeforces - Atto Round 1 (Codeforces Round 1041, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2127/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

struct seg {
  ll lo, hi;
};

void solve() {
  int n, k;
  cin >> n >> k;

  vll a(n), b(n);
  for (ll &x : a) cin >> x;
  for (ll &x : b) cin >> x;

  vector<seg> v(n);
  ll base = 0;
  for (int i = 0; i < n; ++i) {
    ll l = min(a[i], b[i]);
    ll h = max(a[i], b[i]);
    v[i] = {l, h};
    base += h - l;
  }

  sort(all(v), [](const seg &p, const seg &q) {
    return p.lo < q.lo;
  });

  ll mx = v[0].hi, gap = LLONG_MAX;
  bool overlap = false;

  for (int i = 1; i < n; ++i) {
    if (v[i].lo <= mx) {
      overlap = true;
      break;
    }
    gap = min(gap, v[i].lo - mx);
    mx = max(mx, v[i].hi);
  }

  ll ans = base;
  if (!overlap) ans += 2 * gap;

  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) solve();

  return 0;
}


