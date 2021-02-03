#include <stdio.h>
// 병합 정렬은 정확히 반절씩 나누기 때문에 최악의 경우에도
// O(NlogN) 보장함 
// 항상 반으로 쪼개기 때문에 피벗값이 없음 
// 쪼갰다 합치는 순간에 정렬 수행 
// 퀵정렬의 한계점 보안

int number = 8; 
int sorted[8]; // 정렬된 배열을 담을 수 있는 배열 (정렬배열은 반드시 전역 변수로) 

void merge(int a[], int m, int middle, int n){
	 // 시작, 중간, 끝 값
	 int i = m;
	 int j = middle + 1;
	 int k = m; 
	 // 작은 순서대로 배열에 삽입
	 while(i <= middle && j <= n){
	 	if(a[i] <= a[j]){
	 		// 중간 값이 시작값보다 크다면  
	 		sorted[k] = a[i];
	 		// 정렬배열에 작은 값을 차곡차곡 넣어줌 
	 		i++;
		 } else {
		 	sorted[k] = a[j];
		 	// 그렇지 않다면 j가 작은 값이므로 
			 // 정렬배열에 j를 차곡차곡 넣어줌 
		 	j++;
		 }
		 k++;
	 } 
	 // i가 먼저 끝난 경우 j는 n까지 도달하지 못한 경우임
	 // i 가 이미 정렬 배열에 넣었다면 j도 넣어야함
	 // 반대로도 마찬가지 
	 // 남은 데이터도 삽입
	 if(i > middle){
	 	for(int t = j; t <= n; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 } else {
	 	for(int t = i; t <= middle; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 }
	 
	 // 정렬된 배열 삽입
	 for(int t = m; t<= n; t++){
	 	a[t] = sorted[t];
	 	// 모든 위치를 다 방문하면서 정렬된 배열 값을 실제 배열로 옮김  
	 } 
	 
}

void mergeSort(int a[], int m, int n){
	// 크기가 1보다 큰 경우
	if(m < n){
		int middle = (m+n)/2;
		mergeSort(a, m, middle); // 왼쪽 정렬값 
		mergeSort(a, middle+1, n); // 오른쪽 정렬값  
		merge(a, m, middle, n); // 나중에 합침 
	} 
}

int main(void){
	int array[number] = {7, 6, 5, 8, 4, 5, 9, 1};
	mergeSort(array, 0, number-1);
	for(int i = 0; i < number; i++){
		printf("%d ", array[i]);
	} 
}
