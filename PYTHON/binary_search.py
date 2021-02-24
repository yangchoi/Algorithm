def binary_search(list, item):
    low = 0
    high = len(list) -1 
    # low, high : 전체 리스트 중에서 어떤 부분을 탐색해야하는지 알려줌

    while low <= high: # 만약 탐색 범위를 줄이지 못했다면 계속 실행 
        mid = (low + high) // 2 # 가운데 숫자 확인
        guess = list[mid] 

        if guess == item: # 아이템 찾음
            return mid
        if guess > item: # 추측한 숫자가 너무 큼
            high = mid -1
        else: # 추측한 숫자가 너무 작음
            low = mid + 1 
    return None # 아이템이 리스트에 없음

my_list = [1, 3, 5, 7, 9]

print(binary_search(my_list, 3))
print(binary_search(my_list, -1))


# 이진 탐색 
# 정렬되어 있는 배열을 반으로 쪼개어 목표값과 비교하는 것 


# 빅오 표기법
# 빅오 표기법은 시간 단위로 속도를 세는 것이 아님
# 연산 횟수를 비교하기 위한 것