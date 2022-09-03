# P값은 0과 N 사이의 값으로 자르는 기준
# index가 0 - P-1 까지의 합에서 P - N-1 까지의 합을 빼서 절댓값한 것의 최솟값 을 구하라
# 배열을 둘로 나눴을 때 부분 배열의 차가 최소가 되는 값

# sum[i] = A[0] + A[1] + ... + A[i] 인 배열을 만들고
# P 연산시 sum[i], sum[N-1]의 차를 계산 
def solution(A):
    first = A[0]
    second = sum(A[1:])
    result = abs(first - second)

    for i in range(1, len(A) - 1) :
        first += A[i]
        second -= A[i]
        result = min(result, abs(first - second))
    
    return result
