N, K = map(int, input().split())

ans = 0

# この3重ループは計算量が多くなってしまう
# for a in range(1, N+1):
#     for b in range(1, N+1):
#         for c in range(1, N+1):
#             if a + b + c == K:
#                 ans += 1

for a in range(1, N+1):
    for b in range(1, N+1):
        c = K - a - b
        
        if 1 <= c <= N:
            ans += 1

print(ans)
