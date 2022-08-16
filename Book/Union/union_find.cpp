#include <iostream>
#include <vector>
using namespace std;

// Union-Find
struct UnionFind {
  vector<int> par, siz;
  // par: 각 꼭짓점의 부모 꼭짓점 번호, 자신이 루트인 경우 -1이됨
  // siz: 각 꼭짓점에 속한 루트 트리의 꼭짓점 개수

  // 초기화
  UnionFind(int n) : par(n, -1), siz(n, 1) {}

  // get root
  int root(int x) {
    if (par[x] == -1)
      return x; // if x is root, return x
    else return par[x] = root(par[x]);
  }

  // x와 y가 같은 그룹에 속해있는가(루트가 일치하는가)
  bool isSame(int x, int y) { return root(x) == root(y); }

  // x를 포함한 그룹과 y를 포함한 그룹을 병합
  bool unite(int x, int y) {
    // x와 y를 각각 루트까지 이동시킴
    x = root(x);
    y = root(y);

    // 이미 같은 그룹이라면 아무것도 하지 않음
    if (x == y)
      return false;

    // union by size(y 쪽의 크기가 작도록 만들기)
    if (siz[x] < siz[y])
      swap(x, y);

    // y를 x의 자식으로 만들기
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }

  // x 를 포함한 그룹 크기
  int size(int x) {
    return siz[root(x)];
  }
};


int main() {
  UnionFind uf(7); // {0}, {1}, {2}, {3}, {4}, {5}, {6}

  uf.unite(1, 2);
  uf.unite(2, 3);
  uf.unite(5, 6);
  cout << uf.isSame(1, 3) << endl; // true
  cout << uf.isSame(2, 5) << endl; // false

  uf.unite(1, 6);
  cout << uf.isSame(2, 5) << endl; // false

}