graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["a1", "a2"]
graph["tom"] = ["a2", "hoo"]
graph["claire"] = ["thom", "john"]
graph["a1"] = []
graph["a2"] = []
graph["tom"] = []
graph["john"] = []

# 해시테이블은 순서를 가지지 않기 떄문에 키/값 쌍을 추가하는 순서는 중요하지 않음

# 큐 생성 : 양방향 큐 deque 함수
from collections import deque
search_queue = deque() # 큐 생성
search_queue += graph["you"] # 모든 이웃을 탐색 큐에 추가

while search_queue: # 큐가 비어있지 않은 한 계속 실행
    person = search_queue.popleft() # 큐의 첫번째 사람 꺼냄
    if this_is_person(someone)
        print(someone + "is a person!")
        return True
    else:
        search_queue += graph[someone] # 내가 찾던 사람이 아님. 모든 이웃을 탐색 목록에 추가 
return False  # 이곳에 도달했다는 것은 내가 찾던 사람이 아무도 없다는 것 

def this_is_person(name):
    return name[-1] == 'n' # 만약 해당 사람의 이름이 n으로 끝나면 내가 찾던 사람 


# 탐색을 한 번 마치고 큐에 들어간 사람들 중에 중복이 생기지 않도로 ㄱ
# 이미 탐색을 마친 사람의 리스트를 만든다 
def search(name):
    search_queue = deque()
    search_queue += graph[name]
    searched = []
    while search_queue:
        person = search_queue.popleft()
        if not someone in searched: # 이전에 확인하지 않은 사람만 확인 
            if this_is_person(someone):
                print(someon + "is a person!")
                searched.append(someone)
            else:
                search_queue += graph[someone]
                searched.append(someone) # 이 사람을 확인한 것으로 표시 
    return False 

search("you")


# 너비 우선 탐색 : O(정점 수 + 간선 수) = O(V+E)