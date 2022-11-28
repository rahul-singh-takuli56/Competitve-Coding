#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b;
		cin >> n >> a >> b;
		if (a == n && b == n) {
			cout << "Yes" << '\n';
			continue;
		}
		if (a + b < n - 1) {
			cout << "Yes" << '\n';
			continue;
		}
		cout << "No" << '\n';
	} return 0;
}
