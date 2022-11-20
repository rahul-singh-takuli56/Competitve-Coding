#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define forlp for(int i=0;i<n;i++)

int solve()
{
	string st;
	for (int i = 0; i < 50; i++) {
		st += "Yes";
	}
	string s;
	cin >> s;
	int n = s.size();

	if (s == st.substr(0, n)) {
		Yes;
	}
	else if (s == st.substr(1, n)) {
		Yes;
	}
	else if (s == st.substr(2, n)) {
		Yes;
	}
	else
		No;


	return 0;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}