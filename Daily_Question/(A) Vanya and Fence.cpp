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
	int n, h; cin >> n >> h;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] <= h)
			c1++;
		else
			c2++;
	}
	cout << c1 + (c2 * 2) << endl;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// ll tt; cin>>tt;
	// while(tt--){
	solve();
	// }
	return 0;
}
