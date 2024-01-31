N = int(input())
R = [list(input().split()) for _ in range(N)]

R = [[r[0], int(r[1])] for r in R]

ans = []
for i in range(N):
    S, P = R[i]
    ans.append([S, P, i+1])

ans.sort(key=lambda x: (x[0], -x[1]))

for a in ans:
    print(a[2])
