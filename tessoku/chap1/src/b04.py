N = input()

ans = 0
for i, n in enumerate(N, start=1):
    ans += int(n) * 2**(len(N) - i)

print(ans)
