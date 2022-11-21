#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, a, b;
    cin >> n >> a >> b;
    --a; --b;
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < n - 1; i++) {
      int x, y, w;
      cin >> x >> y >> w;
      --x; --y;
      g[x].emplace_back(y, w);
      g[y].emplace_back(x, w);
    }
    vector<int> d(n, -1);
    vector<int> que(1, a);
    d[a] = 0;
    for (int it = 0; it < (int) que.size(); it++) {
      for (auto& p : g[que[it]]) {
        int u = p.first;
        if (d[u] == -1 && u != b) {
          que.push_back(u);
          d[u] = d[que[it]] ^ p.second;
        }
      }
    }
    set<int> all;
    for (int i = 0; i < n; i++) {
      if (d[i] != -1) {
        all.insert(d[i]);
      }
    }
    d.assign(n, -1);
    que.assign(1, b);
    d[b] = 0;
    for (int it = 0; it < (int) que.size(); it++) {
      for (auto& p : g[que[it]]) {
        int u = p.first;
        if (d[u] == -1) {
          que.push_back(u);
          d[u] = d[que[it]] ^ p.second;
        }
      }
    }
    bool ok = false;
    for (int i = 0; i < n; i++) {
      if (i != b) {
        if (all.find(d[i]) != all.end()) {
          ok = true;
          break;
        }
      }
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
  return 0;
}
