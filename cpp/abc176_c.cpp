#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t A[N];
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int64_t ret = 0;
  int64_t diff = 0;
  for(int i = 1; i < N; i++) {
    diff = A[i - 1] - A[i];
    if(0 <= diff) {
      A[i] += diff;
      ret += diff;
    }
  }
  cout << ret << endl;
  return 0;
}
