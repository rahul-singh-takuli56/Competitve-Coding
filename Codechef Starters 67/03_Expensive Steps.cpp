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
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int a = min(x1, n - x1 + 1);
    int b = min(y1, n - y1 + 1);
    int c = min(x2, n - x2 + 1);
    int d = min(y2, n - y2 + 1);
    int e = abs(x2 - x1) + abs(y2 - y1);
    int f = min(c, d) + min(a, b);
    cout << min(e, f) << endl;
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
