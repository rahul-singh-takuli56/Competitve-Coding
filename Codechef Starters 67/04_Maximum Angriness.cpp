#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector<ll>
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back()
#define pob pop_back()
#define inf 1e9


void solve() {
    ll a, b;
    cin >> a >> b;
    ll s = (a * (a - 1)) / 2;
    if (b < a / 2) {
        ll c = a - 2 * b;
        s -= (c * (c - 1)) / 2;
    }
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
