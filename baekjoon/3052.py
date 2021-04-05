nums = []

for i in range(10):
    n = int(input())
    nums.append(n % 42)

nums = set(nums) # set을 이용해 중복 제거 
# set : 집합 
print(len(nums))