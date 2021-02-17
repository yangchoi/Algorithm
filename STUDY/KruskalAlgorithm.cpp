#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// kruskal algorithm
// 가장 적은 비용으로 모든 노드를 연결하기 위해 사용 
// 노드 = 정점 = 도시 
// 그래프에서 동그라이메 해당하는 부분
// 간선 = 거리 = 비용
// 그래프에서 선에 해당하는 부분

// 간선 숫자 = 노드 숫자 - 1

// 모든 간선들을 거리를 기준으로 먼저 오름차순 정렬 수행
// 그러면 가장 적은 비용으로 모든 노드를 연결한 그래프인 최소 비용 신장 트리 만들어짐

// 1. 정렬된 순서에 맞게 그래프에 포함시킴
// 2. 포함시키기 전에는 사이클 테이블 확인
// 3. 사이클을 형성하는 경우 간선을 포함하지 않음 
// 최소 비용 신장 트리에서는 사이클이 발생하면 안됨

 
 
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


// 간선 클래스 선언 (간선 정보 담음)
class Edge {
public:
	int node[2];
	int distance;
	Edge(int a, int b, int distance){
		this -> node[0] = a;
		this -> node[1] = b;
		this -> distance = distance;
	}
	
	bool operator < (Edge &edge){
		return this -> distance < edge.distance;
	}
}; 
int main(void){
	int n = 7; 
	int m = 11; 
	
	vector<Edge> v;
	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 2, 67));
	v.push_back(Edge(2, 5, 17));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(4, 7, 45));
	v.push_back(Edge(4, 7, 73));
	
	// 간선 비용을 기준으로 오름차순 정렬 
	sort(v.begin(), v.end());
	
	// 각 정점이 포함된 그래프가 어디인지 저장 
	int parent[n];
	for(int i = 0; i < n; i++){
		parent[i] = i; // 정점은 자기 자신 가리키도록 
	} 
	int sum = 0;
	for(int i = 0; i < v.size(); i++){
		// 사이클이 발생하지 않는 경우 그래프에 포함시킴
		if(!findParent(parent, v[i].node[0] -1, v[i].node[1]-1)){
			sum += v[i].distance;
			unionParent(parent, v[i].node[0] -1, v[i].node[1]-1);
		} 
	}
	printf("%d\n ", sum);
}
