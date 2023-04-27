#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  bool isOdd = false;
  for(int i = 0; i < N; i++) {
    cin >> A.at(i);
    if(A.at(i) % 2 == 1) isOdd = true;
  }

  if(isOdd != false) {
    cout << 0 << endl;
    return 0;
  }

  int ans = 0;
  vector<int> vCnt(N, 0);
  for(int i = 0; i < N; i++) {
    do {
      A.at(i) /= 2;
      vCnt.at(i)++;
      if(A.at(i) <= 1) break;
    } while(A.at(i) % 2 == 0);

    if(0 < i && vCnt.at(i) < ans) {
      ans = vCnt.at(i);
    } else if(i == 0) {
      ans = vCnt.at(i);
    }
  }

  cout << ans << endl;
  return 0;
}
