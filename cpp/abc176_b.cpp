#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int ret = 0;
  for(char n : N) {
    ret += ((int)n) - 48; // トップランカーはret += n - '0'
  }

  cout << ((ret % 9 == 0) ? "Yes" : "No") << endl; // トップランカーと同じ
  return 0;
}
