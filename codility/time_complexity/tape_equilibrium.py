# P값은 0과 N 사이의 값으로 자르는 기준
# index가 0 - P-1 까지의 합에서 P - N-1 까지의 합을 빼서 절댓값한 것의 최솟값 을 구하라

def solution(A):
    first = A[0]
    second = sum(A[1:])
    result = abs(first - second)

    for i in range(1, len(A) - 1) :
        first += A[i]
        second -= A[i]
        result = min(result, abs(first - second))
    
    return result
