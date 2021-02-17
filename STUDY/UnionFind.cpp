#include <stdio.h> 
// union-find(합집합 찾기)
// 서로소 집합
// 여러개의 노드가 존재할 때 두개의 노드를 선택해서 
// 현재 이 두 노드가 서로 같은 그래프에 속하는지 판별하는 알고리즘
 

// 부모노드 찾는 함수  
int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]); // 재귀적 
	 
}

// 두 부모 노드 합치는 합수 
int unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b; // 더 작은 값으로 합침 
} 

// 같은 부모를 가지는지 확인 (같은 그래프에 속해있는지)
int findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return 1;
	return 0;
} 

int main(void){
	int parent[11];
	for(int i = 1; i < 10; i++){
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);

	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	printf("1과 5는 연결되어있나? %d\n ", findParent(parent, 1, 5));
	// 서로 다른 그래프에 속해있음
	unionParent(parent, 1, 5); // 연결
	printf("1과 5는 연결되어있나? %d\n ", findParent(parent, 1, 5));
	 
}
