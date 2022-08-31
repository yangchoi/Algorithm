# 배열 rotation
def solution(A, K):
    # 주어진 배열 A의 원소들이 K 만큼 A 안에서 회전
    if len(A) > 1 :
      for i in range(K) :
        a = A.pop() # pop() 은 가장 마지막 원소 빼줌
        A.insert(0, a) # 가장 마지막 원소 빼서 0번째 인덱스에 넣음
    return A
