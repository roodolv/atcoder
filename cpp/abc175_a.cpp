#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int maxSeq = 0;

  for(int i = 0; i < S.size(); i++) {
    if(S.at(i) == 'R') {
      if(i != 0 && S.at(i - 1) == 'R') {
        maxSeq++;
      } else if(maxSeq == 0) {
        maxSeq = 1;
      }
    }
  }

  cout << maxSeq << endl;
  return 0;
}
