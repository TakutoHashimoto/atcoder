N = int(input())
W = list(map(int, input().split()))

ans = float("INF")
for i in range(N-1):
    ans = min(ans, abs(sum(W[:i+1])-sum(W[i+1:])))

print(ans)
