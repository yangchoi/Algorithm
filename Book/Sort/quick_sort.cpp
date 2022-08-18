#include <iostream>
#include <vector>
using namespace std;

// 배열 a 구간 [left, right) 정렬
// [left, right) 는 left, left + 1 , ... , right - 1 번째를 뜻함
void QuickSort(vector<int> &a, int left, int right) {
  if (right - left <= 1)
    return;

  int pivot_index = (left + right) / 2; // 적당히 가운데 값을 pivot으로 함
  int pivot = a[pivot_index];
  swap(a[pivot_index], a[right - 1]); // pivot과 오른쪽 끝을 서로 바꿈

  int i = left; // i 는 왼쪽에 채운 pivot 미만 요소의 오른쪽 끝
  for (int j = left; j < right - 1; ++j) {
    if (a[j] < pivot) { // pivot 미만인 경우엔 왼쪽으로
      swap(a[i++], a[j]);
    }
  }

  swap(a[i], a[right - 1]); // pivot 을 적절한 장소에 삽입

  // 재귀적으로
  QuickSort(a, left, i); // 왼쪽 반(pivot 미만)
  QuickSort(a, i+1, right); // 오른쪽 반(pivot 이상)
}

int main() {
  // 입력
  int N; // 요소 개수
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  // 퀵 정렬
  QuickSort(a, 0, N);
}