graph = {}
graph["you"] = ["alice", "john", "rita"]

graph["start"] = {}
graph["start"]["a"] = 6
graph["start"]["b"] = 2

graph["a"] = {}
graph["a"]["fin"] = 1

graph["b"] = {}
graph["b"]["a"] = 3
graph["b"]["fin"] = 5

graph["fin"] = {} # 도작점에는 이웃 없음

infinity = float("inf")

costs = {}
costs["a"] = 6
costs["b"] = 2
costs["fin"] = infinity

parents = {}
parents["a"] = "start"
parents["b"] = "start"
parents["fin"] = None

precessed = []

node = find_lowest_cost_node(costs) # 앚기 처리되지 않은 가장 싼 정점 찾기 
while node is not None: # 모든 정점 처리시 종료 
  cost = cots[node]
  neighbors = graph[node]
  for n in neighbors.key():
    new_cost = cost + neighbors[n] 
    if costs[n] > new_cost: # 만약 이 정점 지나가는 가격이 더 싸다면 
      costs[n] = new_cost  # 정점의 가격 갱신 
      parents[n] = node # 부모를 이 정점으로 새로 설정 
  precessed.append(node) # 정점 처리한 사실 기록 
  node = find_lowest_cost_node(costs) # 다음으로 처리할 정점 찾아 반복 

def find_lowest_cost_node
  lowest_cost = float("inf")
  lowest_cost_node = None

  for node in costs: # 모든 정점 확인
    cost = costs[node] # 아직 처리하지 않은 정점 중 더 싼 것이 있으면 
    if cost < lowest_cost and node not in processed: 
      lowest_cost = cost 
      lowest_cost_node = node 
  return lowest_cost_node

  