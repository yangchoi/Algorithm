a = int(input())
b = int(input())
c = int(input())

result = list(str(a * b * c)) # 문자열 반환

for i in range(10):
    print(result.count(str(i))) # list 이용해 각 문자를 요소로 가지는 리스트로 변환
     