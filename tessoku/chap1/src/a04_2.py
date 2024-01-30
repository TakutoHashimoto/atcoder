N = int(input())
ans = []

while N > 0:
    ans.append(N % 2)
    N //= 2

print(*ans[::-1], sep="")
