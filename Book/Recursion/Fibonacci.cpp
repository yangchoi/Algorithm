// recursion is called several times.

int fibo(int N) {
  // base case
  if(N == 0) return 0;
  else if(N == 1) return 1;

  // recursion is called
  return fibo(N - 1) + fibo(N - 2);
}