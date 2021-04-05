import sys 
input = sys.stdin.readline
n = input()

num_list = list(map(int, input().split()))
print(min(num_list), max(num_list), end='')