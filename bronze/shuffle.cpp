#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> cow_id(n);
  for (int i = 0; i < n; ++i) {
    cin >> cow_id[i].first;
  }
  for (int i = 0; i < n; ++i) {
    cin >> cow_id[i].second;
  }
  vector<int> res(n);
  for (int i = 0; i < n; ++i) {
    res[cow_id[i].first - 1] = cow_id[i].second;
  }
  for (auto r : res) {
    cout << r << '\n';
  }
}

int main() {
  const string name = "shuffle";
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
