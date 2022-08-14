#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000; // 스택 배열의 최대 크기

int st[MAX]; // 스택을 나타내는 배열
int top = 0; // 스택의 선두를 나타내는 인덱스

// 스택 초기화
void init() {
  top = 0; // 스택 인덱스를 초기 위치로 초기화
}

// 스택이 비어 있는지 판정
bool isEmpty() {
  return (top == 0); // 스택 크기가 0 인지
}

// 스택이 가득 찼는지 판정
bool isFull() {
  return (top == MAX); // 스택 크기가 Max 인지
}

// push
void push(int x) {
  if (isFull()) {
    cout << "error: stack is full." << endl;
    return;
  }

  st[top] = x; // x save
  ++top; // add top
}

// pop
int pop() {
  if (isEmpty()) {
      cout << "error: stack is empty." << endl;
      return -1;
    }
    --top; // top subtract
    return st[top]; // top 위치에 있는 값 돌려줌
}

int main() {
  init(); // 스택 초기화

  push(3); // push 3 in stack
  push(5); // push 5 in stack
  push(7); // push 8 in stack

  cout << pop() << endl; // {3, 5, 7} -> {3, 5}가 되고 7 출력
  cout << pop() << endl; // {3, 5} -> {3} 이 되고 5 출력

  push(9); // push 9 in stack {3} -> {3, 9}
}