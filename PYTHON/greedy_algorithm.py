# 시간표를 짤 때 되도록 많은 과목을 듣고 싶지만 시간이 겹쳐서 모두 듣진 못할 때 
# 어떻게 신청해야 최대한 많이 신청할 수 있을까? 
# 1. 가장 빨리 끝나는 과목을 고름. 이 과목이 처음으로 신청해야할 과목
# 2. 첫번쨰 과목이 끝난 후에 시작하는 과목 고르기. 마찬가지로 가장 빨리 끝나는 과목 고름
# 반복.. 
# > 탐욕 알고리즘
# 각 단계에서 최적의 수를 찾아냄
# > 과목 중에서 가장 빨리 끝나는 수업을 선택하는 것이 목표
# 국소 최적해를 찾아 최종적으로 전역 최적해를 구하게 됨 


# 만약 정확한 답을 계산하는데에 시간이 너무 많이 걸린다면 ? 근사 알고리즘 사용
# 얼마나 빠른가 / 최적해에 얼마나 가까운가 


# 방송하고자하는 주의 목록
states_needed = set(["qw", "er", "rt", "ty", "yu", "ui", "oi", "op"])
# 집합 타입 사용 
# 집합 타입 : 리스트와 비슷하지만 각 원소가 한번씩만 나타남 (중복된 원소 x)

# 선택된 방송국 리스트 ( 해시 테이블 사용 )
stations = {}
stations["qone"] = set(["qw", "er", "rt"])
stations["qtwo"] = set(["ty", "ui", "oi"])
stations["qthree"] = set(["op", "er", "yu"])
stations["qfour"] = set(["er", "rt"])
stations["qfive"] = set(["yu", "op"])
# 키는 방송국 이름, 값은 그 방송국의 방송을 들을 수 있는 주의 목록 

# 내가 방문할 방송국 목록을 저장할 집합 
final_stations = set()

# 어떤 방송국에서 방송을 할지 계산 
# 모든 방송국을 하나씩 보면서 아직 방송 되지 않은 주 중에서 가장 많은 주를 커버하고 있는 방송국 고름 (best stations)

best_station = None
states_covered = set()
for station, states_for_station in stations.items():
# states_covered : 아직 방송되지 않은 주 중에서 해당 방송국이 커버하는 주의 집합
# for 문으로 모든 방송국 중에서 어떤 것이 최선의 선택인지 확인 
    covered = states_needed & states_for_station # 교집합 
    # covered : states_needed와 states_for_stations에 모두 포함된 주의 집합
    # 아직 방송되지 않은 주 중에서 현재 고려하고 있는 방송국이 커버하는 주의 집합 
    # if문으로 해당 방송국이 현재 best_station보다 더 많은 주를 커버하는지 확인 
    if len(covered) > len(states_covered):
        best_station = station # 그렇다면 best_station
        states_covered = covered

final_stations.add(best_station) # for 끝나면 best_station을 방송국 목록에 추가 
# states_needed도 갱신해야함
# 해당 방송국에서 커버하는 주는 이제 더 이상 고려할 필요가 없어짐 
states_needed -= states_covered
# states_needed-가 완전히 빌 때까지 반복 

print(final_stations)