// Euclidean algorithm 
// GCD(m, n)
// divide m with n, remainder r is such that GCD(m, n) = GCD(n, r)

#include <iostream>
using namespace std;

int GCD(int m, int n) {
  // base case
  if(n == 0) return m;

  // recursion is called
  return GCD(n, m % n);
}

int main() {
  cout << GCD(51, 15) << endl; // print 3
  cout << GCD(15, 51) << endl; // print 3
}