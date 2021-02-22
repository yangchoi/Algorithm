#include <stdio.h>
#include <math.h>

bool isPrimeNumber(int x){
	int end = (int) sqrt(x); // 제곱근 (제곱근까지만 본다)
	for(int i = 2; i <= end; i++){
		if( x % 2 == 0) return false; 
	} 
	return true;
}

int main(void){
	printf("%d ", isPrimeNumber(100));
	return 0;
}

// 대량의 소수를 한꺼번에 판별하고자 한다면?? >> 에라토스테네스의 체를 사용 
// 1. 이차월 배열을 생성해 값을 초기화함 ( 각 인덱스에 값을 넣어줌) 
// 2. 2부터 시작해서 특정 숫자의 배수에 해당하는 숫자들을 모두 지움 
// > 자기 자신은 지우지 않고 2의 배수부터 지워봄 
// > 3의 배수 지워봄 (자기 자신은 지우지 않음) 
// 3. 이미 지워진 숫자의 경우 건너뜀
// 4. 이러한 과정을 반복 
 
