#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<int> cap(3); 
  vector<int> amo(3);
  for (int i = 0; i < 3; ++i) {
    cin >> cap[i];
    cin >> amo[i];
  }

  for (int i = 0; i < 100; ++i) {
    auto a = i % 3;
    auto b = (i + 1) % 3;
    auto d = min(amo[a], cap[b] - amo[b]);
    amo[a] -= d;
    amo[b] += d;
  }

  for (int i = 0; i < 3; ++i) {
    cout << amo[i] << '\n';
  }
}

int main() {
  const string name = "mixmilk";
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
