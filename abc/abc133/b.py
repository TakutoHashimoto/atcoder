import itertools
from typing import List
from math import sqrt


def calc_dist(coor1: List[int], coor2: List[int]) -> int:
    _sum = 0
    for c1, c2 in zip(coor1, coor2):
        _sum += (c1 - c2)**2
    return _sum

def is_square(num: int) -> bool:
    flag = False
    for i in range(1, int(sqrt(num))+1):
        if i**2 == num:
            flag = True
    return flag


N, D = map(int, input().split())
X = [list(map(int, input().split())) for _ in range(N)]

cnt = 0
for coor1, coor2 in itertools.combinations(X, 2):
    if is_square(calc_dist(coor1, coor2)):
        cnt += 1

print(cnt)
