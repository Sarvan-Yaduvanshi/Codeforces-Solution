// Author :  DynamicSarvan
// Created :  2025-08-06 22:28:40
// Problem: C. You Soared Afar With Grace
// Contest: Codeforces - Teza Round 1 (Codeforces Round 1015, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2084/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define endl '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

const int N = 2e5 + 5;

int n, m;
int v[N], w[N], pos[N], res[N][2];

inline void swap_positions(int i, int j) {
	if (i == j) return;
	res[++m][0] = i;
	res[m][1] = j;
	swap(v[i], v[j]);
	swap(pos[v[i]], pos[v[j]]);
	swap(w[i], w[j]);
}

void solve() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
		pos[v[i]] = i;
	}
	for (int i = 1; i <= n; ++i) {
		cin >> w[i];
	}

	m = 0;
	int same = 0;
	for (int i = 1; i <= n; ++i) {
		if (v[i] == w[i]) {
			if (n % 2 == 0 || same) {
				cout << -1 << endl;
				return;
			}
			same = i;
		} else if (w[pos[w[i]]] != v[i]) {
			cout << -1 << endl;
			return;
		}
	}

	if (n & 1) {
		swap_positions(same, (n + 1) / 2);
	}
	for (int i = 1; i <= n / 2; ++i) {
		swap_positions(pos[w[i]], n - i + 1);
	}

	cout << m << endl;
	for (int i = 1; i <= m; ++i) {
		cout << res[i][0] << ' ' << res[i][1] << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}
