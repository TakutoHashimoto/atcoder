A, B = map(int, input().split())
is_exists = False

for i in range(A, B+1):
    if 100 % i == 0:
        is_exists = True

print("Yes" if is_exists else "No")