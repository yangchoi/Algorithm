#include <stdio.h>

int main(void){
  int i, j, min, index, temp;
  // i, j : 배열에 있는 원소들을 계속해서 탐색하기 위해서 존재 
  // min : 최소값
  // index : 가장 작은 원소가 존재하는 위치 
  // temp : 특수한 숫자들을 바꾸기 위해 존재 
  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  for(i = 0; i < 10; i++){
    // 10개의 원소를 총 10번 반복해서 탐색 
    min = 999; // 최소값에는 가장 큰 값을 넣어줌(모든 원소들 보다 더 큰 문자)
    // min 값은 항상 최소값을 선택해야하기 때문에 처음에는 큰 값을 넣어줌
    for(j = i; j < 10; j++){
      if(min > array[j]){
        min = array[j];
        index = j; 
      }
    }
    // swaping : 두 원소의 자리를 바꿔줌 
    temp = array[i]; // 가장 앞에 있는 값을 임시적으로 temp에 넣어줌
    array[i] = array[index];
    array[index] = temp;
  }
  for(i = 0; i < 10; i++){
    printf("%d ", array[i]);
  }
  return 0;
}
