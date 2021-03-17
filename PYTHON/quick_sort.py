# 퀵정렬은 정렬 알고리즘
# 선택정렬보다 훨씬 빠름
# 마찬가지로 분할 정복 기법

# 정렬하기에 가장 간단한 배열은? 
# > 정렬할 필요도 없는 정렬 : 비어있는 배열, 원소가 하나인 배열 

# 비어있는 배열, 원소가 하나인 배열 > 기본 단계 

def quicksort(array):
  if len(array) < 2:
    return array


# 원소가 두개인 배열도 정렬하기 쉬움

# 퀵 정렬?
# 배열에서 원소 하나를 고름 > 기준 원소 pivot 
# 모든 원소를 기준 원소보다 작은 원소와 큰 원소로 분류 : 분할 
# 하위 배열에 대해 재귀적으로 퀵 정렬 호출 

def quicksort2(array):
  if len(array) < 2:
    return array # 기본 단계 : 원소 개수가 0이나 1이면 이미 정렬된 상태 
  else: 
    pivot = array[0] # 재귀 단계 
    less = [i for i in array[1:] if i <= pivot]
    # 기준 원소보다 작거나 같은 모든 원소로 이뤄진 하위 배열 

    greater = [i for i in array[1:] if i> pivot] 
    # 기준원소보다 큰 모든 원소로 이뤄진 하위 배열 

    return quicksort2(less) + [pivot] + quicksort2(greater)

print(quicksort2([10, 5, 2, 3])) 