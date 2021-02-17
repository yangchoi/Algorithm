#include <stdio.h> 
// union-find(������ ã��)
// ���μ� ����
// �������� ��尡 ������ �� �ΰ��� ��带 �����ؼ� 
// ���� �� �� ��尡 ���� ���� �׷����� ���ϴ��� �Ǻ��ϴ� �˰�����
 

// �θ��� ã�� �Լ�  
int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]); // ����� 
	 
}

// �� �θ� ��� ��ġ�� �ռ� 
int unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b; // �� ���� ������ ��ħ 
} 

// ���� �θ� �������� Ȯ�� (���� �׷����� �����ִ���)
int findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return 1;
	return 0;
} 

int main(void){
	int parent[11];
	for(int i = 1; i < 10; i++){
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);

	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	printf("1�� 5�� ����Ǿ��ֳ�? %d\n ", findParent(parent, 1, 5));
	// ���� �ٸ� �׷����� ��������
	unionParent(parent, 1, 5); // ����
	printf("1�� 5�� ����Ǿ��ֳ�? %d\n ", findParent(parent, 1, 5));
	 
}