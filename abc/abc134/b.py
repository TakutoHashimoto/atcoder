from math import ceil


N, D = map(int, input().split())

W = 2 * D + 1
print(ceil(N/W))
