// 연결리스트 삭제
// 한 노드를 삭제하려면 해당 노드 앞 뒤에 있는 노드도 조작해야함
// 양방향 연결리스트 사용
// > 각 노드를 연결하는 포인터가 양방향이 되도록 한 것
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 양방향 자기 참조 구조체
// 각 노드의 멤버 변수로 다음 노드를 가리키는 포인터 *next와 이전 노드르르
// 가리키는 포인터 *prev를 가짐
// 연결리스트가 양방향이 아니라는 것을 강조하고 싶을 때는 : 단방향 연결 리스트
struct Node {
  Node *prev, *next;
  string name; // 노드에 저장된 값

  Node(string name_ = "") :
  prev(NULL), next(NULL), name(name_) { }
};

// 감시노드를 전역변수로 선언
Node* nil;

// 초기화
void init() {
  nil = new Node();
  nil->prev = nil;
  nil->next = nil;
}

// 연결 리스트 출력
void printList() {
  Node* cur = nil->next; // 선두부터 출발
  for (; cur != nil; cur = cur->next) {
    cout << cur->name << " -> ";
  }
  cout << endl;
}

// 노드 p 직후에 v 삽입
void insert(Node* v, Node* p = nil) {
  v->next = p->next;
  p->next->prev = v;
  p->next = v;
  v->prev = p;
}

// 노드 v 삭제
void erase(Node *v) {
  if (v == nil) return; // v가 감시 노드이면 아무것도 하지 않음
  v->prev->next = v->next;
  v->next->prev = v->prev;
  delete v; // 메모리 해제
}

int main() {
  // 초기화
  init();

  // 만들고 싶은 노드명 목록
  // 마이막 노드부터 순서대로 삽입함
  vector<string> names = {"AA", "BB", "CC", "DD", "EE"};

  // 연결리스트 작성 : 각 노드를 생성해 연결 리스트 맨 앞에 삽입
  Node *ZZ;
  // 각 노드 생성하고 연결 리스트 선두에 삽입
  for (int i = 0; i < (int)names.size(); ++i) {
    // 노드 작성
    Node* node = new Node(names[i]);

    // 작성한 노드를 연결 리스트 선두에 삽입
    insert(node);

    // ZZ노드 저장
    if (names[i] == "ZZ")
      ZZ = node;
  }

  // ZZ  노드 삭제
  cout << "before : ";
  printList(); // 삭제전
  erase(ZZ);
  cout << "after: ";
  printList(); // 삭제 후
}