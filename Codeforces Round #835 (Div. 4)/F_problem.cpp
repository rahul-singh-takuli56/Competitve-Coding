#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, d;
    long long c;
    cin >> n >> c >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int low = -1, high = d + 1;
    while (low < high) {
      int mid = (low + high + 1) >> 1;
      long long sum = 0;
      for (int i = 0; i < d; i++) {
        int id = i % (mid + 1);
        if (id < n) {
          sum += a[id];
        }
      }
      if (sum >= c) {
        low = mid;
      } else {
        high = mid - 1;
      }
    }
    if (low == d + 1) {
      cout << "Infinity" << '\n';
    } else {
      if (low == -1) {
        cout << "Impossible" << '\n';
      } else {
        cout << low << '\n';
      }
    }
  }
  return 0;
}
