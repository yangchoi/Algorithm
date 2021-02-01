#include <stdio.h>
// 각 숫자를 적절한 위치에 삽입하는 방법 
// 필요시에만 위치를 바꿈
int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 9; i++){
		j = i; // 현재 정렬할 원소를 선택해 적절히 삽입  
		while(array[j] > array[j + 1]){
			// 왼쪽 원소가 더 크다면 자리 바꿔주기  
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		} 
	}
	for(i = 0; i < 10; i++){
		printf("%d ",array[i]);
	}
	return 0; 
} 

// 최악의 경우에는 10 + 9 + .. + 1
// O(N^2)
// 거의 정렬된 상태에 삽입정렬할 시엔 굉장히 빠르다 
 
