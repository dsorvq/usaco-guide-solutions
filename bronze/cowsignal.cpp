#include <bits/stdc++.h>

using namespace std;

void solve() {
  int m, n, k;
  cin >> m >> n >> k;
  
  for (int i = 0; i < m; ++i) {
    string orig;
    cin >> orig;
    
    for (int l = 0; l < k; ++l) {
      for (int j = 0; j < n * k; ++j) {
        cout << orig[j / k];
      }
      cout << '\n';
    }
  }
}

int main() {
  const string name = "cowsignal";
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
