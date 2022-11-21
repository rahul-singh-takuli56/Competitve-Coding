#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> p0(n + 1);
    for (int i = 0; i < n; i++) {
      p0[i + 1] = p0[i] + (a[i] == 0);
    }
    vector<int> p1(n + 1);
    for (int i = 0; i < n; i++) {
      p1[i + 1] = p1[i] + (a[i] == 1);
    }
    long long inv = 0;
    int k1 = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        k1 += 1;
      } else {
        inv += k1;
      }
    }
    long long ans = inv;
    for (int i = 0; i < n; i++) {
      auto cur = inv;
      if (a[i] == 0) {
        cur -= p1[i];
        cur += p0[n] - p0[i + 1];
      } else {
        cur += p1[i];
        cur -= p0[n] - p0[i + 1];
      }
      ans = max(ans, cur);
    }
    cout << ans << '\n';
  }
  return 0;
}
