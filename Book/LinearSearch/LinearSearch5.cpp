#include <iostream>
#include <vector>
using namespace std;

// partial sum with bit

int main() {
  // input
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i = 0; i < N; ++i) cin >> a[i];

  // bit is worked with total for existed 2^N subset
  bool exist = false;
  for (int bit = 0; bit < (1 << N); ++bit) {
    int sum = 0; // sum elements includes subset
    for(int i = 0; i < N; ++i) {
      // is elements in a[i] included in subset?
      if(bit & (1<<i)) {
        sum += a[i];
      }
    }
    // is sum coincided with W?
   if (sum == W) exist = true;
  }
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}