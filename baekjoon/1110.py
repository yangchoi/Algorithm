num = int(input())
check = num
new_num = 0
temp = 0
count = 0
while True:
    temp = num//10 + num%10 # num//10 : 입력받은 수의 10자리 수
    # num%10 1의 자리 수 
    new_num = (num%10)*10 + temp%10
    # 새로운 숫자는 입력받은 숫자의 마지막 숫자와 두 숫자를 더한 값 
    count += 1 # 카운트 ++ 
    num = new_num 
    if new_num == check:
        # 새로운 숫자가 원래 숫자와 같아지만 while문 그만 
        break
print(count)