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
    int n; cin >> n;
    vector<int>arr(n);
    int c = 0;
    f(i, n) {
        cin >> arr[i];
        if (arr[i] % 2)
            c++;
    }
    if (c == 0 || c % 2)
        No;
    else
        Yes;

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
