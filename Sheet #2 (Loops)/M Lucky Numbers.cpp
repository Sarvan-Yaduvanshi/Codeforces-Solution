// Problem: M. Lucky Numbers
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
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

bool isLucky(int n) {
	string s = to_string(n);
	
	for (char ch : s) {
		if (ch != '4' && ch != '7') return false;
	}
	
	return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    
    vector<int> luckyNumbers;
    bool found = false;
    
    for (int i = a; i <= b; i++) {
    	if (isLucky(i)) {
    		luckyNumbers.push_back(i);
    		found = true;
    	}
    }
    
    if (!found) cout << -1 << endl;
    else {
    	for (size_t i = 0; i < luckyNumbers.size(); ++i) {
    		cout << luckyNumbers[i] << (i == luckyNumbers.size() - 1 ? "" : " ");
    	}
    	cout << endl;
    }

    return 0;
}
