#include <iostream>
#include <queue>
#include <vector> 
// 너비우선탐색(BFS)
// 탐색할 때 너비를 우선으로 하여 탐색하는 알고리즘
// 맹목적인 탐색을 하고자할때 사용할 수 있음
// 미로찾기 같은 알고리즘에서 사용 
// 큐 사용 
 
using namespace std;

int number = 7;
int c[7];
// 방문했다는 것을 의미 
vector<int> a[8];
//벡터가 들어갈 배열 

void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for(int i = 0; i < a[x].size(); i++){
			int y = a[x][i];
			if(!c[y]){
				q.push(y);
				c[y] = true;
			}
		}
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
	
	bfs(1);
	
	return 0;
	
	
}
