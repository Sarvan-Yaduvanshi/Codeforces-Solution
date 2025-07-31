// Problem: J. Primes from 1 to n
// Contest: Codeforces - Sheet #2 (Loops)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
// Memory Limit: 256 MB
// Time Limit: 3000 ms

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

void sieveOfEratosthenes(int n) {
	vector<bool> isPrime(n + 1, true);
	isPrime[0] = isPrime[1] = false;
	
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) cout << i << " ";
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    sieveOfEratosthenes(n);

    return 0;
}
