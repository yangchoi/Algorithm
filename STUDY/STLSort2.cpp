#include <iostream>
#include <algorithm>
// 정렬할 기준을 직접 정해본다 

using namespace std;

bool compare(int a, int b){
	return a < b;
	// a가 b보다 작을 때 우선적으로 정렬 수행 (true값) 
}

int main(void){
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a+10, compare); // compare 가 들어가며 오른정렬을 정의함
	// 만약 내림차순으로 바꾸고 싶다면 compare의 등호를 변경해준다.
	// compare가 정렬의 기준이 된다.  
	for(int i = 0; i < 10; i++){
		cout << a[i] << ' ';
	}
}
