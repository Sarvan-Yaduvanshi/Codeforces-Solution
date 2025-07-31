// Problem: C. Even, Odd, Positive and Negative
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
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
    ll num;
    cin >> num;
    
    ll eCount = 0;
    ll oCount = 0;
    ll pCount = 0; 
    ll nCount = 0; 
    
    for (int i = 0; i < num; i++) {
    	ll number;
    	cin >> number;
    	
    	if (number % 2 == 0) {
    		eCount++;
    	} else {
    		oCount++;
    	}
    	
    	if (number > 0) {
    		pCount++;
    	} else if (number < 0){
    		nCount++;
    	}
    }
    
    cout << "Even: " << eCount << endl;
    cout << "Odd: " << oCount << endl;
    cout << "Positive: " << pCount << endl;
    cout << "Negative: " << nCount << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
