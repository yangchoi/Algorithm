// 정렬(sort)
// 선택정렬 : 가장 작은 것을 선택해서 앞으로 보낸다.

#include <stdio.h>

int main(void) {
  int i, j, min, index, temp;
  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  for (i = 0; i < 10; i++) {
    min = 9999; // 이 값은 최소값을 선택해야하기 때문에 큰 값을 넣어줌
    for (j = i; j < 10; j++) {
      // 최소값을 골라준다.
      if (min > array[j]) {
        // 현재 탐색하고 있는 값이 최소값이라면?
        min = array[j];
        // 탐색값과 최소값을 바꾸어준다.
        index = j;
      }
    }
    // swaping
    // 탐색값을 임시로 temp에 넣는다.
    temp = array[i];
    // 최소값에 탐색값을 넣는다.
    array[i] = array[index];
    array[index] = temp;
  }
  for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  return 0;
}


// 등차수열
// 10 + 9 + ...+ 1
// 10 * (10 + 1)/2 = 55
// N * (N + 1) / 2
// N * N (2는 크게 의미가 없다고 여기므로)
// O(N^2)
// 선택정렬의 시간 복잡도는 O(N^2)
