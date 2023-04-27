#include <bits/stdc++.h>
using namespace std;

// 三角形の条件はa+b>c && b+c>a && c+a>b
int main() {
  int N;
  vector<tuple<int, int, int>> vt;
  vector<int> v(N);

  cin >> N;
  for(int x = 0; x < N; x++) {
    cin >> v.at(x);
  }

  sort(v.begin(), v.end());

  int cnt = 0;
  int L_i, L_j, L_k;

  for(int i = 0; i < N; i++) {
    if(i != 0 && cnt >= 1 && v.at(i) == get<0>(vt.at(cnt - 1))) continue;
    L_i = v.at(i);
    for(int j = i; j < N; j++) {
      if(v.at(j) == v.at(i)) {
        continue;
      } else {
        L_j = v.at(j);
      }
      for(int k = 0; k < N; k++) {
        if(v.at(k) == v.at(j)) {
          continue;
        } else {
          L_k = v.at(k);
          vt.at(cnt) = make_tuple(L_i, L_j, L_k);
          cnt++; // 公式もトップランカーもこうしてる
        }
      }
    }
  }

  // トップランカーはこの部分をソルバとして別に定義
  int ans = 0;
  for(auto it = vt.begin(); it != vt.end(); it++) {
    if(get<0>(*it) + get<1>(*it) > get<2>(*it) && get<2>(*it) + get<0>(*it) > get<1>(*it) && get<1>(*it) + get<2>(*it) > get<0>(*it)) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
