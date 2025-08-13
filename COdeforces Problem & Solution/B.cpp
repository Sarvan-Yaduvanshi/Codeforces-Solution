// Author :  DynamicSarvan
// Created :  2025-08-08 11:29:58
// Problem: B. Hamiiid, Haaamid... Hamid?
// Contest: Codeforces - Atto Round 1 (Codeforces Round 1041, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2127/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

#define nline '\n'
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

int ans(string s, int x) {
	int p1 = x - 1;
	
	while (p1 >= 0 && s[p1] == '.') {
		p1--;
	}
	
	int ans = p1 + 2;
	
	p1 = x + 1;
	while (p1 < s.size()  && s[p1] == '.') {
		p1++;
	}
	
	ans = min(ans, (int)s.size() - p1 + 1);
	
	return ans;
}

void solve() {
	ll n, x; cin >> n >> x;
	x--;
	string s; cin >> s;
	int ans1 = 0, ans2 = 0;
	
	{  // Start of Scenario 1
        string t = s;
        int p1 = x + 1;
        while(p1 < n && s[p1] == '#') {
            p1++;
        }
        if(p1 != n) {
            t[p1] = '#';
            ans1 = ans(t,x);
        }
    }
    {  // Start of Scenario 2
        string t = s;
        int p1 = x-1;
        while(p1 >= 0 && s[p1] == '#') p1--;
        if(p1 != -1) {
            t[p1] = '#';
            ans2 = ans(t,x);
        }
    }
 
    cout << max(ans1,ans2) << nline;
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

