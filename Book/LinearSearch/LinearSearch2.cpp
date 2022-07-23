#include <iostream>
#include <vector>
using namespace std;

// find location of target

int main() {
  // input
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  // linear search
  int found_id = -1; // non existence value
  for (int i = 0; i < N; ++i) {
    if(a[i] == v) {
      found_id = i; // find and save index
      break; // loop break
    }
  }
  // print output ( if value is '-1', it means there is no value I found )
  cout << found_id << endl;
}