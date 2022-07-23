#include <iostream>
using namespace std;

// sum 1 from N
int func(int N) {
  cout << "func(" << N << ") is called" << endl;

  if(N == 0) return 0;
  
  // solve problem as recursion and print
  int result = N + func(N - 1);
  cout << "sum from " << N << " = " << result << endl;

  return result;
}

int main() {
  func(5);
}