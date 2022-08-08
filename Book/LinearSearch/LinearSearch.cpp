#include <iostream>
#include <vector>
using namespace std;

// find target value

int main() {
  // input
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) {
    // linear search
    bool exist = false;
    // exist is called 'flag'
    // means, when i search target, I can set false first, 
    // and after finding target, it's going to be 'true'.
    // flag is changed 'on' or 'off' as event. 
    for (int i = 0; i < N; ++i) {
      if(a[i] == v) {
        exist = true; // if target is found, flat sets
      }
    }
  // output result
  if (exist) cout << "Yes" << endl;
  else cout << "NO" << endl;
  }
}
