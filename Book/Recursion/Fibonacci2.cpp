#include <iostream>
using namespace std;

int fibo(int N) {
  cout << "fibo(" << N << ") is called" << endl;

  // basecase
  if(N == 0) return 0;
  else if(N == 1) return 1;

  // recursion
  int result = fibo(N - 1) + fibo(N - 2);
  cout << N << " th = " << result << endl;

  return result;
}

int main() {
  fibo(6);
}