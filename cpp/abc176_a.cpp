#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, T;
  cin >> N >> X >> T;

  int cnt = N / X;
  if(N % X == 0) {
    cout << cnt * T << endl;
  } else {
    cout << cnt * T + T << endl;
  }

  return 0;
}
