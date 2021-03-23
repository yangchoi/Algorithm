n = int(input())

sum = 0

for i in range(n, 0, -1):
# range(초기값, 종료값, 증가값)
    sum += i
print(sum)