N = int(input())
A = list(map(int, input().split()))

ans = False


for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if A[i] + A[j] + A[k] == 1000:
                ans = True
                break


print("Yes" if ans else "No")
