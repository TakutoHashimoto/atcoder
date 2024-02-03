N = int(input())
P = list(map(int, input().split()))

flag = False
if P == sorted(P):
    # 最初からソートされている場合
    flag = True
else:
    for i in range(N):
        for j in range(i+1, N):
            Q = P.copy()
            Q[i], Q[j] = Q[j], Q[i]
            if Q == sorted(P):
                flag = True
                break

print("YES" if flag else "NO")
