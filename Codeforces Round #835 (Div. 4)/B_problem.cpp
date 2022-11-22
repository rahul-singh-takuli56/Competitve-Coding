// 1st method 
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
    string s;
    cin >> s;
    cout << (int) (*max_element(s.begin(), s.end()) - 'a' + 1) << '\n';
  }
  return 0;
}

//2nd method by me
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  sort(s.begin(), s.end());
  char ch = s[n - 1];
  cout << int(ch) - 96 << endl;

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
