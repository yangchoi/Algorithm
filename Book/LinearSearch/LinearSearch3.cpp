#include <iostream>
#include <vector>
using namespace std;

// find minimum value

const int INF = 20000000; // just huge value

int main() {
  // input
  int N;
  cin >> N;
  vector<int> a(N);
  for( int i = 0; i < N; ++i) cin >> a[i];

  // linear search
  int min_value = INF; // variable for saving minumum value
  for(int i = 0; i < N; ++i) {
    if(a[i] < min_value) min_value = a[i];
    // if value in this turn is smaller than min_value, 
    // min_value is going to be that value in this true
    // until this loop is ended
  }

  // print output
  cout << min_value << endl;
}