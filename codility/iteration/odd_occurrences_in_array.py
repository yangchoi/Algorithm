# 짝이 맞지 않는 값을 찾아내기 
from collections import Counter

def solution(A):
  if len(A) == 1 :
    return A[0]
  else :
    counted = Counter(A)
    # Counter : 여러 형태의 데이터를 인자로 받음
    # 중복된 데이터가 저장된 배열을 인자로 넘기면 원소가 몇번씩 나오는지 저장된 객체 얻음
    # Counter({1: 3, 2: 4}) => elem 1: 3번, elem 2: 4번

    for key, val in counted.items() :
      if val % 2 != 0 :
        # 나온 횟수가 짝수가 아닌 경우의 key(index)를 리턴
        return key
