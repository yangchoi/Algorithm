#include <stdio.h>
// 힙은 부모노드의 값이 자식 노드보다 커야함 

// 힙 생성 알고리즘
// 어떤 노드에 대해 힙이 붕괴가 되었다면
// 부모노드보다 큰 자식 노드의 자리를 서로 바꿔줌
// 이렇게 힙 구조를 유지 
// 전체트리를 힙으로 만드는 시간 복잡도는 
// O(logn) 

int number = 9; 
int heap[9] = {7, 6, 5, 8, 3, 4, 9, 1, 2};

int main(void){
	// 먼저 전체 트리 구조를 최대 힙구조로 바꿈  
	for(int i = 1; i < number; i++){
		int c = i;
		do {
			int root = (c - 1)/2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
				
			}
			c = root;
		}while(c != 0);
	}
	// 크기를 줄여가며 반복적으로 힙 구성
	for(int i = number -1; i >= 0; i--){
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0; 
		int c = 1; 
		do {
			c = 2 * root + 1;
			// 자식 중에 더 큰 값 찾기 
			if(heap[c] < heap[c+1] && c < i-1){
				c++;
			} 
			// 루트보다 자식이 더 크다면 교환
			if(heap[root] < heap[c] && c < i){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		}while(c < i);
	} 
	
	for(int i = 0; i < number; i++){
		printf("%d ", heap[i]);
	}
}
