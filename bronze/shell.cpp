#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<int> scores(3);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    swap(scores[a - 1], scores[b - 1]);
    ++scores[c - 1];
  } 

  cout << *max_element(begin(scores), end(scores)) << '\n';
}

int main() {
  const string name = "shell";
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
