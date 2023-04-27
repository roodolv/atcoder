#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X, K, D;
  cin >> X >> K >> D;

  for(int64_t i = 0; i < K; i++) {
    if(X < 0) {
      X += D;
    } else if(0 < X) {
      X -= D;
    }
  }
  cout << abs(X) << endl;
  return 0;
}
