#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define forlp for(int i=0;i<n;i++)

void  solve()
{
	int n, a, b; cin >> n >> a >> b;
	if (n == a && a == b && b == n) Yes;
	else if (n - 1 > (a + b)) Yes;
	else No;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
