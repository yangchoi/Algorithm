#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100000; // 큐 배열의 최대 크기

int qu[MAX]; // 큐를 가리키는 배열
int tail = 0, head = 0; // 큐의 요소 구간을 나타내는 변수


// 큐 초기화
void init() { head = tail = 0; }

// 큐가 비어있는지 판정
bool isEmpty() { return (head == tail); }

// 큐가 가득 찼는지 판정
bool isFull() { return (head == (tail + 1) % MAX); }

// enqueue
void enqueue(int x) {
  if (isFull()) {
    cout << "error: queue is full. " << endl;
    return;
  }
  qu[tail] = x;
  ++tail;
  if(tail == MAX) tail = 0; // 링버퍼 끝에 도달했으면 0으로
}

// dequeue
int dequeue() {
  if (isEmpty()) {
    cout << "error: queue is empty. " << endl;
    return -1;
  }
  int res = qu[head];
  ++head;
  if (head == MAX)
    head = 0; // 링버퍼 끝에 도달했으면 0
  return res;
}

int main() {
  init(); // 큐 초기화

  enqueue(3); // insert 3 in queue
  enqueue(5); // insert 5 in queue
  enqueue(7); // insert 7 in queue

  cout << dequeue() << endl; // {3, 5, 7} -> {5, 7}이 되고 3 출력
  cout << dequeue() << endl; // {5, 7} -> {7}이 되고 5 출력
  enqueue(9); // insert 9 in queue
}