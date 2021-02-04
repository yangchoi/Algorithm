#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			pair<string, pair<int, int> > b){
	if(a.second.first == b.second.first){
		return a.second.second > b.second.second;
		// 더 어린 학생이 우선순위 가짐 
	}else {
		return a.second.first > b.second.first; 
		// 성적이 더 높으면 우선순위 가짐  
	}
}
int main(void){
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("yang", pair<int, int>(90, 19960822)));
	v.push_back(pair<string, pair<int, int> >("kim", pair<int, int>(65, 1870930)));
	v.push_back(pair<string, pair<int, int> >("part", pair<int, int>(44, 19870213)));
	v.push_back(pair<string, pair<int, int> >("choi", pair<int, int>(44, 19451019)));
	v.push_back(pair<string, pair<int, int> >("lee", pair<int, int>(33, 19971208)));
	
	// pair : 한쌍의 데이터 사용
	/*
	v.push_back(pair<int, string>(90, "yang"));
	v.push_back(pair<int, string>(80, "kim"));
	v.push_back(pair<int, string>(70, "part"));
	v.push_back(pair<int, string>(33, "choi"));
	v.push_back(pair<int, string>(79, "lee"));	  
	*/
	
	sort(v.begin(), v.end(), compare); // 첫번쨰 값부터 마지막 값까지 정렬 
	
	for(int i = 0; i < v.size(); i++){
		cout<< v[i].first << ' ';
		// pair<first, second>
	}
	return 0;
}


