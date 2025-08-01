// Problem: I. Palindrome
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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

void solve() {
    ll n;
    cin >> n;
    
    ll originalNum = n;
    
	ll rev = 0;
	while (n > 0) {
		ll rem = n % 10;
		rev = (rev * 10) + rem;
		n /= 10;
	}
	
	cout << rev << endl;
	if (originalNum == rev) {
	    cout << "YES" << endl;
	} else {
	    cout << "NO" << endl;
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	solve();

    return 0;
}
