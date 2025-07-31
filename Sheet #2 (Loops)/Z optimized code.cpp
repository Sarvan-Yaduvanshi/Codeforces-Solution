// Problem: Z. Three Numbers
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
// Memory Limit: 256 MB
// Time Limit: 3000 ms

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
    ll k, s;
    cin >> k >> s;
    
    ll count = 0;
    
    for (int x = 0; x <= k; x++) {
    	ll remaining_sum = s - x;
    	ll min_y = max(0LL, remaining_sum - k);
        ll max_y = min(k, remaining_sum);
        
        if (max_y >= min_y) {
        	count += (max_y - min_y) + 1;
        }
    }
    
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
