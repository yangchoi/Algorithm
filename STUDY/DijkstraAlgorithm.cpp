#include <stdio.h> 
// 다익스트라 알고리즘
// 최단 경로
// 특정한 하나의 정점에서 다른 모든 정점으로 가는 최단 경로 알려줌
// 단, 음의 간선은 포함할 수 없음
// 다이나믹 프로그래밍 문제 > 최단 거리는 여러개의 최단 거리로 이루어져있기 때문 

// 1. 출발 노드 설정
// 2. 출발 노드 기준으로 각 노드 최소 비용 저장
// 3. 방문하지 않은 노드 중 가장 비용이 적은 노드 선택
// 4. 해당 노드 거쳐 특정 노드로 가는 경우 고려해 최소 비용 갱신
// 4. 3~4 반복 
 
int number = 6; 
int INF = 1000000000; // 무한대 표현

// 전체 그래프를 초기화 
int a[6][6] = {
	{0, 2, 5, 1, INF, INF}, // 1에서 2로 가는 경우, 1에서 3으로 가는 경우..
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0}
}; 

bool v[6]; // 현재 방문한 여부인지 확인 (방문한 노드) 
int d[6]; // 거리 저장 (최단 거리)  
 
// 가장 최소 거리를 가지는 정점 반환
int getSmallIndex(){
	int min = INF; 
	int index = 0; 
	for(int i = 0; i < number; i++){
		if(d[i] < min && !v[i]){
			min = d[i];
			index = i; 
		}
	}
	return index; 
}

// 다익스트라 수행하는 함수 
void dijkstra(int start){
	// 특정 점점에서 시작 
	for(int i = 0; i < number; i++){
		d[i] = a[start][i]; // 시작점에서 출발 
		
	} 
	v[start] = true;
	for(int i = 0; i < number -2; i++){
		int current = getSmallIndex();
		v[current] = true; // 방문처리 
		for(int j = 0; j < 6; j++){
			if(!v[j]) {
				if(d[current] + a[current][j] < d[j]){
					d[j] = d[current] + a[current][j];
				}
			}			
		}
	}
} 

int main(void){
	dijkstra(0);
	for(int i = 0; i <number; i++){
		printf("%d ", d[i]);
	}
}

// 다익스트라를 위와 같이 선형탐색으로 구현하면 느리다 
 
