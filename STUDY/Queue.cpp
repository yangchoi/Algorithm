#include <iostream>
#include <queue>
// 큐 
// 먼저 들어온 것이 먼저 나감 (first in first out)
// 터널 같은 구조 


using namespace std;

int main(void){
	queue<int> q;
	q.push(7); 
	q.push(5); 
	q.push(4);
	q.pop();
	q.push(6);
	q.pop();
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
 	} 
 	return 0;
}
