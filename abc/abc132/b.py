n = int(input())
P = list(map(int, input().split()))

cnt = 0
for i in range(1, n-1):
    tmp = [P[i-1], P[i], P[i+1]]
    tmp.sort()
    if P[i] == tmp[1]:
        cnt += 1

print(cnt)
