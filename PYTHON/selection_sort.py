# 배열에 새 원소를 추가하는 것은 쉽지 않은 일 
# 만약 공간이 모자라 매번 모든 원소를 메모리의 새로운 위치로 옮긴다면 작업이 매우 느려짐 
# 그렇다고 미리 메모리 공간을 많이 만들어 놓아도 낭비 

# 연결리스트(linked list)를 사용하면 원소를 메모리의 어느 곳에나 둘 수 있음
# 각 원소에는 목록의 다음 원소에 대한 주소가 저장됨
# 여러 가지 임의의 메모리 주소들이 하나의 목록으로 연결되어 있음
# 연결 리스트 사용시 원소 옮길 일이 없음

# 그래도 배열의 장점은 있음
# 만약 모든 원소의 값을 한 번에 읽어야 한다면 연결리스트가 좋지만
# 특정 원소만 알고 싶다면 배열이 더 좋음
# 배열은 모든 원소의 주소를 다 알고 있음
# 연결 리스트에서는 원소가 이웃하고 있지 않아 몇 번째 원소가 어디에 있는지 바로 계산 못함 


# 배열을 작은 정수에서 큰 정수 순서로 정렬하는 코드 
def findSmallest(arr):
  smallest = arr[0] # 가장 작은 정수 저장 
  smallest_index = 0 # 가장 작은 정수의 인덱스 저장
  for i in range(1, len(arr)):
    if arr[i] < smallest:
      smallest = arr[i]
      smallest_index = i
  return smallest_index

# 선택 정렬 코드 
def selectionSort(arr): # 배열 정렬 
  newArr = []
  for i in range(len(arr)):
    smallest = findSmallest(arr)
    newArr.append(arr.pop(smallest))
  return newArr

print(selectionSort([5, 3, 6, 2, 10]))