#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> road(100);
  for (int i = 0, dist = 0; i < n; ++i) {
    int d, lim;
    cin >> d >> lim;
    for (int j = dist; j < dist + d; ++j) {
      road[j] = lim;
    }
    dist += d;
  }

  int res = 0;
  for (int i = 0, dist = 0; i < m; ++i) {
    int d, speed;
    cin >> d >> speed;
    for (int j = dist; j < dist + d; ++j) {
      res = max(res, speed - road[j]);
    }
    dist += d;
  }
  cout << res << '\n';
}

int main() {
  const string name = "speeding";
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  if (!name.empty()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }

  int t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
