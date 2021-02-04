#include <iostream>
#include <algorithm>
// 데이터를 묶어서 정렬하는 방법
// 즉 , 객체로 정리가 되어 있는 것

using namespace std;

class Student {
	public:
		string name;
		int score; 
		Student(string name, int score){
			this-> name = name;
			this-> score = score;
			// 생성자 (초기함수) 
		}
		
		// 정렬기준 (점수가 작은 순서)
		bool operator < (Student &student){
			return this->score < student.score;
			// 내 점수가 더 낮다면 우선순위가 더 낮다 
			 
		} 
};

int main(void){
	Student students[] = {
		Student("양씨", 90),
		Student("박씨", 94),
		Student("김씨", 30),
		Student("최씨", 40),
		Student("오씨", 50)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
}


