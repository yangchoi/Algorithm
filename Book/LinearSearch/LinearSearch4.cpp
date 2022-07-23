#include <iostream>
#include <vector>
using namespace std;

// find two values
// a + b >= K

const int INF = 20000000; // any huge value

int main() {
  // input
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N);
  for(int i = 0; i < N; ++i) cin >> a[i];
  for(int i = 0; i < N; ++i) cin >> b[i];

  // linear search
  int min_value = INF;
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < N; ++j) {
      // if value is smaller than k, 
      // skip
      if(a[i] + b[j] < K) continue;

      // minimum value
      if(a[i] + b[j] < min_value) {
        min_value = a[i] + b[j];
      }
    }
  }
  // print output
  cout << min_value << endl;
}