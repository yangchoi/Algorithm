#include <stdio.h>
// 피봇 : 기준값
// 피봇값보다 큰 것은 오른쪽, 작은 것은 왼쪽으로 가도록 

int number = 10; 
int data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
 
void quickSort(int *data, int start, int end){
	if(start >= end){
		// 원소가 1개인 경우 
		return;  
	}
	
	int key = start; // 키는 첫번째 원소 
	int i = start + 1; // 왼쪽부터 하나씩 큰 값을 찾을 떄의 index
	int j = end; // 마지막 값   
	// i : 왼쪽 출발지점
	// j : 오른쪽 출발지점
	int temp;
	
	while(i <= j){
		// 엇갈릴 때까지 반복
		// 왼쪽부터 출발한게 오른쪽부터 출발한것보다 작거나 같을 때 
		while(data[i] <= data[key]) {
			i++; // 키 값보다 큰 값을 만날 때까지 오른쪽으로 이동
			 
		}
		while(data[j] >= data[key] && j > start){
			// 키 값보다 작은 값을 만날 때까지 반복
			// 커봤자 start까지만 가도록 
			// 오른쪽은 설정해주지 않아도 됨
			j--;	 
		}
		if(i > j){
			// 엇갈린 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		}else {
			// 엇갈리지 않았다면 큰값과 작은 값을 바꿔줌 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp; 
		}
		
	}
	
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);	
} 

int main(void){
	quickSort(data, 0, number-1);
	for(int i = 0; i < number; i++){
		printf("%d ", data[i]);
	}
}

// 피봇 설정에 따라 O(N^2) 가 최악의 경우엔 나타날 수있음

// 이미 정렬이 되어 있는 경우? 
// 분할 정렬의 이점을 사용하지 못하고 
// 10개의 정렬인 경우 10개 일일이 확인

// 삽입 정렬의 경우엔 이미 정렬이 된 경우 굉장히 빠름
// 일반적으로는 quick sort 가 빠르나 경우에 따라 다름
 
