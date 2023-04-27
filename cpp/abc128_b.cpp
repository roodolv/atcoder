#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<string, int>> restaurant(N);

  for(int i = 0; i < N; i++) {
    string location;
    int init_score;
    cin >> location >> init_score;
    // ascii_loc = (uint64_t)location;
    int score = 100 - init_score;
    restaurant.at(i) = make_pair(location, score);
  }

  vector<pair<string, int>> unsorted_rest = restaurant;
  sort(restaurant.begin(), restaurant.end());

  for(int i = 0; i < N; i++) {
    string i_loc;
    int i_score;
    tie(i_loc, i_score) = restaurant.at(i);
    for(int j = 0; j < N; j++) {
      string j_loc;
      int j_score;
      tie(j_loc, j_score) = unsorted_rest.at(j);
      if(equal(i_loc.begin(), i_loc.end(), j_loc.begin()) == true && i_score == j_score) {
        cout << j + 1 << endl;
      }
    }
  }
  return 0;
}
