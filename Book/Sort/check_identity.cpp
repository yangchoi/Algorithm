#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

char* solution(const char *survey[], size_t survey_length, int choices[],
               size_t choices_length) {
  // return 값은 malloc등 동적할당 사용 (new는 메모리 재조정 불가)
  // 할당 길이는 상황에 맞게 변경
  char* answer = (char *)malloc(1);
  int score [21] = {0, }; // 각각 알파벳에 저장
}