# X: 현재 개구리의 위치
# Y: 목표지점
# D: 개구리가 한 번 뛰었을 떄의 거리 
# X 위치에서 개구리가 N 번 점프해 Y에 도착하거나 넘어가게되는 N을 구함
def solution(X, Y, D):
    # Y - X 값을 D로 나눈 후 나머지 발생시 몫 + 1, 나머지 없으면 몫을 결과로 보내기 
    T = Y - X
    Q = T//D
    R = T%D

    if R == 0 :
      return Q
    else :
      return Q + 1
    
