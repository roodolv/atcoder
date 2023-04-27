#include <bits/stdc++.h>
using namespace std;

// このアルゴリズムで再帰的にやるとN=43を超えたあたりから反応しなくなる
/*
uint64_t calc_lucas(int N) {
  uint64_t L;

  if(N == 1) L = 1;
  if(N == 0) L = 2;

  if(N > 1) { L = calc_lucas(N - 1) + calc_lucas(N - 2); }

  return L;
}
*/

// こちらのforによる加算方式に変えたところ計算できた
uint64_t calc_lucas(int N) {
  uint64_t L[N + 1];
  // uint64_t *L;  // これだと上手くいかない

  L[0] = 2LL;
  L[1] = 1LL;

  if(N == 0 || N == 1) {
    return L[N];  // Nが0または1の場合は対応したリュカ数を返す
  } else if(N >= 2) {
    for(int i = 2; i <= N; i++) {
      L[i] = L[i - 1] + L[i - 2];
    }
  }
  return L[N];
}

int main() {
  int N;
  cin >> N;

  uint64_t L = calc_lucas(N);

  cout << fixed << setprecision(20);
  cout << L << endl;
  return 0;
}
