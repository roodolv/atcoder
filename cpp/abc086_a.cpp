#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  switch((a * b) % 2) {
    case 0:
      cout << "Even" << endl;
      break;
    case 1:
      cout << "Odd" << endl;
      break;
  }
  return 0;
}
