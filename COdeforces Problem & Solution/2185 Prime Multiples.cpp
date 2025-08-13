// Author :  DynamicSarvan
// Created :  2025-08-12 23:51:35
// Problem: Prime Multiples
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2185
// Memory Limit: 512 MB
// Time Limit: 1000 ms

#pragma GCC optimize("O3,unroll-loops")
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
void solve() {
    ll n;
    int k;
    cin >> n >> k;

    vector<ll> primes(k);
    for (int i = 0; i < k; ++i) {
        cin >> primes[i];
    }

    ll total_count = 0;
    for (int i = 1; i < (1 << k); ++i) {
        ll product = 1;
        int subset_size = 0;

        // Construct the subset based on the bits of 'i'
        for (int j = 0; j < k; ++j) {
            // If the j-th bit is set, the j-th prime is in our subset
            if ((i >> j) & 1) {
                subset_size++;
                if (primes[j] > n / product) {
                    product = n + 1; // Set product to be > n to signal breakout
                    break;
                }
                product *= primes[j];
            }
        }

        if (product > n) {
            continue;
        }
        if (subset_size % 2 == 1) {
            total_count += n / product;
        } 
        // If subset size is even, subtract the term.
        else {
            total_count -= n / product;
        }
    }

    cout << total_count << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  
  return 0;
}

