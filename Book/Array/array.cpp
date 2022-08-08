#include <vector>
#include <iostream>

// c++ 에서 배열 사용하기

using namespace std;
int main()
{
vector<int> a = {4, 3, 12, 7, 11, 1, 9, 8, 14, 6};

  // 0번째 요소 출력
  cout << a[0] << endl;

  // 두번째 요소 출력
  cout << a[2] << endl;

  // 두번째 요소를 5로 교체
  a[2] = 5;

  // 두번째 요소 출력
  cout << a[2] << endl;
}