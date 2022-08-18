#include <iostream>
#include <vector>
using namespace std;

// 배열 a를 정렬
void InsertionSort(vector<int> & a) {
  int N = (int)a.size();
  for (int i = 1; i < N; i++) {
    int v = a[i]; // 삽입 하고픈 값

    // v를 삽입할 적절한 장소 j찾기
    int j = i;
    for (; j > 0; --j) {
      if (a[j - 1] > v) { // v 보다 크면 하나 뒤로 옮김
        a[j] =  a[j-1];
      }
      else break; // v 이하면 멈춤
    }
    a[j] = v; // 마지막 j번째로 v 가져감
   }
}

int main() {
  // 입력
  int N; // 요소 개수
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  // 삽입 정렬
  InsertionSort(a);
}