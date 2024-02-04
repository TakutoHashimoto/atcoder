N = int(input())

cnt = 0
for num in range(1, N+1):
    if len(str(num)) % 2 != 0:
        cnt += 1

print(cnt)
