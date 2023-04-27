#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, C_w, C_h, D_w, D_h;
  cin >> H >> W >> C_h >> C_w >> D_h >> D_w;
  vector<string> vS(H);
  for(int i = 0; i < H; i++) {
    cin >> vS.at(i);
  }
  int diff_w = D_w - C_w;
  int diff_h = D_h - C_h;
  bool isDeadend = false;
  while(isDeadend != true) {
    if(diff_w > 0 && (C_w + 1) <) {
      vS.at(C_h).at(C_w + 1)
    }
  }
  return 0;
}
