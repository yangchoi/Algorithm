# stack
# push : 가장 위에 새 항목 추가 
# pop : 가장 위 항목을 떼어냄

# 스택 
# 스택에서 할일을 pop > 다시 스택에 push 

# 호출 스택 
def greet(name):
    print("hello " + name + "!")
    greet2(name)
    print("getting ready to say bye..")
    bye()

def greet2(name):
    print("how are you," + name + "?")

def bye():
    print("ok bye")


greet("yang")

# 1. greet("yang") 할당
# 함수 호출을 위해 컴퓨터에 메모리 상자를 하나 할당
# 이 메모리에 name이라는 변수에 yang 이라는 값이 저장됨
# 함수를 호출할 때마다 이런 식으로 저장됨 
# 2. hello yang! 프린트한 후 greet2("yang") 으로 다른 함수 호출
# 이 때도 함수 호출에 필요한 다른 메모리 상자 할당
# 컴퓨터는 이런 메모리 상자를 스택으로 사용함 
# 두번째 메모리 상자는 첫번째 메모리 상자에 차곡차곡 올려진 상태 
# 3. how are you yang? 프린트하고 함수호출 상태에서 return 
# return 으로 함수 반환 시 가장 위에 있는 상자는 pop 연산으로 없어짐
# 이제 스택 가장 위에 있는 함수는 greet 함수 
# 어떤 함수를 호출하여 완전시 실행을 완료하기 전이라도 그 함수를 잠시 멈추고 다른 함수 호출 가능
# 중지된 함수의 변수 값들은 모두 메모리에 저장됨 
# greet2 함수 실행 완료 후 greet 함수로 돌아가 멈췄던 위치에서 다시 실행 
# 4. getting ready to say bye > bye 
# 새로운 함수를 위한 메모리 상자가 스택 위에 더해짐
# 5. ok bye! 프린트한 다음 다시 함수 호출로 돌아옴 
# 6. greet 로 돌아옴 
# 호출 스택 : 여러 개의 함수를 호출하면서 함수에 사용되는 변수를 저장하는 스택  