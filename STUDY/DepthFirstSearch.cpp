#include <iostream>
#include <vector> 
// 깊이 우선탐색(DFS)
// 스택 사용됨
// 실제로 스택을 사용하지 않아도 구현이 가능하긴 함
// 컴퓨터는 구조적으로 항상 스택의 원리를 사용하기 때문

// 스택의 최상단 노드 확인
// 최상단 노드에게 방문하지 않은 인접노드가 있으면 
// 그 노드를 스택에 넣고 방문처리
// 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 뺌
// 반복.. 


using namespace std; 

int number = 7; 
int c[7];
// 방문처리 
vector<int> a[8];

void dfs(int x){
	if(c[x]) return;
	c[x] = true; // 첫방문시 
	cout << x << ' ';
	for(int i = 0; i < a[x].size(); i++){
		int y = a[x][i];
		dfs(y);
	} 
} 

int main(void){
	// 1과 2연결 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3 연결 
	a[1].push_back(3);
	a[3].push_back(1);
	// 2와 3연결 
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[4].push_back(5);
	a[5].push_back(4);
	
	a[6].push_back(7);
	a[7].push_back(6); 
	
	dfs(1);
	
	return 0;
}
