# 배열 중에 없는 정수를 찾아라
def solution(A):
    # 하나의 요소가 빠지기 전의 요소 합을 구함
    N = len(A) + 1
    # 하나의 요소가 빠진 A의 합에서 두 개를 빼면 남는 숫자가 missing elem
    S = N * (N + 1)/2
    s = sum(A)

    return int(S - s)
