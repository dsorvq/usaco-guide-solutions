#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;
  int fact = 1;
  if (x > y) {
    swap(x, y);
    fact = -1;
  } 

  int dist = 0;
  for (int i = 0; ; ++i, fact *= -1) {
    int d = pow(2, i) * fact;
    if (x + d >= y) {
      dist += abs(y - x); 
      break;
    }
    dist += abs(d)*2;
  }
  cout << dist << '\n';
}

int main() {
  const string name = "lostcow";
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
