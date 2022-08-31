# int를 binary로 변환한 string에서 1과 1 사이의 gap 구하기
def solution(N):
    # write your code in Python 3.6
    answer = ''

    bin_N = bin(N)
    bin_N = bin_N[2:]
    # 2진수로 변환

    index_list = []
    # enumerate : 내장함수로 for loop 돌림
    for idx, i in enumerate(bin_N) :
        if i == '1':
            index_list.append(idx)
    
    # 만약 index_list에 1이 1개밖에 없으면 gap이 없으므로 return 0
    if len(index_list) < 2:
        return 0
    else : 
        gap = []
        # array 는 0부터 시작하기 때문에 length 에서 - 1
        for i in range(len(index_list) - 1) :
            # 0의 개수를 구함
            gap.append(index_list[i+1] - index_list[i] - 1)
        answer = max(gap) # 최대값
        print(answer)

        return answer
