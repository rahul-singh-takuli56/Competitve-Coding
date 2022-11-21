// 1st method by tourist
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
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    auto p = s;
    sort(p.rbegin(), p.rend());
    for (int i = 0; i < n; i++) {
      cout << -(p[0] == s[i] ? p[1] : p[0]) + s[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}
 

//2nd method by me
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int>arr(n), arr2(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    arr2[i] = arr[i];
  }

  sort(arr2.begin(), arr2.end());
  int m = arr2[n - 1];
  int n1 = arr2[n - 2];

  for (int i = 0; i < n; i++) {
    if (arr[i] == m)
      cout << m - n1 << " ";
    else
      cout << arr[i] - m << " ";
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt; cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
