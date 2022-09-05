# 개구리가 강을 건너기 위해 나뭇잎이 시간에 따라 떨어지는 위치가 담겨있는 N개의 배열 A와
# 목표 위치인 정수 X를 파라미터로 제공
# 예시를 보면 1에서 5까지 나뭇잎이 전부 깔려야하는데에 총 6초가 걸리므로 RETURN 6 이다 
# 깔리지 않는 경우는 -1 을 RETURN 
def solution(X, A):
    check_list = [0]*(X)
    # 1에서 x까지 check 하기 위한 0을 담은 list
    sum = 0

    for idx, i in enumerate(A) :
      # 1초부터 차례로 흐르는 time 으로 인해 enumerate

        if check_list[i-1] == 0 :
            check_list[i-1] = 1
            sum += 1
            if sum == X:
              # SUM이 주어진 X와 같아지면 위치에 도달한 것이므로 
              # 해당 idx를 return 한다.
                return idx
    return -1

