// Author :  DynamicSarvan
// Created :  2025-08-13 01:59:52
// Problem: Problem 1. Fence Painting
// Contest: USACO - USACO 2015 December Contest, Bronze
// URL: https://usaco.org/index.php?page=viewproblem2&cpid=567
// Memory Limit: 256 MB
// Time Limit: 4000 ms

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Use standard input to read from "paint.in"
	freopen("paint.in", "r", stdin);
	// Use standard output to write to "paint.out"
	freopen("paint.out", "w", stdout);

	vector<bool> cover(100);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = a; i < b; i++) { cover[i] = true; }
	for (int i = c; i < d; i++) { cover[i] = true; }

	int ans = 0;
	for (int i = 0; i < cover.size(); i++) { ans += cover[i]; }
	cout << ans << endl;
}