#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector<ll>
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define pb push_back()
#define pob pop_back()
#define inf 1e9


void solve() {
	int t; cin >> t;
	int c = 0;
	while (t--) {
		int p, q;
		cin >> p >> q;

		if ((2 + p) <= q)
			c++;
	}
	cout << c << endl;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// ll tt; cin >> tt;
	// while (tt--) {
	solve();
	// }
	return 0;
}
