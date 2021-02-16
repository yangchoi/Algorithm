#include <iostream>
#include <stack> 
// 자료를 표현하고 처리하는 방법
// 스택 : 택배 상하차 
// 위에서부터 하나씩 꺼내는 것

// 큐 : 은행 창구
// 번호표를 먼저 뽑은 사람이 먼저 서비스를 받음 

using namespace std;

int main(void){
	stack<int> s;
	s.push(7); 
	s.push(5);
	s.push(4);
	s.pop();
	s.push(6);
	s.pop();
	while(!s.empty()){
		cout << s.top() << ' ';
		s.pop();
	
	}   
	return 0;
}
