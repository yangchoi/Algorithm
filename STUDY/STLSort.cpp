#include <iostream>
#include <algorithm>

// 지금부터 C++ 사용 
// STL 라이브러리 사용 
using namespace std;

int main(void){
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a+10); // 가장 마지막 원소를 가리키는 2를 a+10에 들어감
	// 배열 변수명, 정렬할 데이터 갯수 넣어줌
	for(int i = 0; i < 10; i++){
		cout << a[i] << ' ';
	} 
}


