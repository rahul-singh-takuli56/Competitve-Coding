// 1st method 

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << b << '\n';
  }
  return 0;
}

// 2nd method by me
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int>arr;
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  sort(arr.begin(), arr.end());
  cout << arr[1] << endl;
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
