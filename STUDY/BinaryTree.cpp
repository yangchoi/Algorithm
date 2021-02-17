#include <iostream>
// 이진트리, 순회 방식
// 비선형 자료구조는 이진트리 
// 이진트리는 트리 자료구조를 활용한 대표적인 예시
// 데이터의 탐색 속도 증진을 위해 사용하는 구조 
// 트리 제대로 구현하기 위해서는 포인터 사용해야함
// 포인터를 이용해 루트에서 자식노드로 접근할 수 있기 때문 


// 전위 순회 
// 자기자신 > 왼쪽 자식 > 오른쪽 자식
// 중위 순회 
// 왼쪽 자식 > 자기 자신 > 오른쪽 자식
// 후위 순회 
// 왼쪽 자식 > 오른쪽 자식 > 자기 자신 

// 계산기가 처리하기 좋은 형식으로 수식을 바꿀 때는 후위 순회 많이 씀 

using namespace std; 

int number = 15; // 노드 15개  

// 하나의 노드 정보 선언
// 구조체 (구조체 + 함수 = 클래스)  
typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node; 

// 전위 순회 
void preorder(treePointer ptr){
	if(ptr){
		cout << ptr -> data << ' ';
		preorder(ptr -> leftChild);
		preorder(ptr -> rightChild);
	}
} 

// 중위 순회 
void inorder(treePointer ptr){
	if(ptr){
		inorder(ptr -> leftChild);
		cout << ptr -> data << ' ';
		inorder(ptr -> rightChild);
	}
} 

// 후위 순회 
void postorder(treePointer ptr){
	if(ptr){
		postorder(ptr -> leftChild);
		postorder(ptr -> rightChild);
		cout << ptr -> data << ' ';
	}
} 
 

int main(void){
	node nodes[number + 1];
	for(int i = 1; i <= number; i++){
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
		
	}
	for(int i = 1; i <= number; i++){
		if(i % 2 == 0){
			nodes[i / 2].leftChild = &nodes[i];
		}else {
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	//preorder(&nodes[1]);
	//inorder(&nodes[1]);
	postorder(&nodes[1]);
	return 0;
}
 

