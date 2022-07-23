#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
  // base case
  if(i == 0) {
    if(w == 0) return true;
    else return false;
  }

  // not chosen a[i -1]
  if(func(i - 1, w, a)) return true;

  // chose a[i - 1]
  if(func(i -1, w -a[i - 1], a)) return true;

  // false, if both are false
  return false;
}

int main() {
  // input
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i = 0; i < N; ++i) cin >> a[i];

  // recursion
  if(func(N, W, a)) cout << "Yes" << endl;
  else cout << "No" << endl;
}