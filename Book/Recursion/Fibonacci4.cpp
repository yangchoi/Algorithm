// memoization 
// save value calculated before in memory,
// return saved value when coincide argument.
// save -1 not calculated.
#include <iostream>
#include <vector>
using namespace std;

// array for saving answer with fibo(N)
vector<long long> memo;

long long fibo(int N) {
  // base case
  if(N == 0) return 0;
  else if(N == 1) return 1;

  // check memo(if already calculated, return)
  if (memo[N] != -1) return memo[N];

  // call recursion while memo
  return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main() {
  // initialization with -1 for memoization
  memo.assign(50, -1);

  // fibo(49) is called
  fibo(49);

  // memo[0], ... , memo[49] is saved for answer
  for(int N = 2; N < 50; ++N) {
    cout << N << " th = " << memo[N] << endl;
  }
}
