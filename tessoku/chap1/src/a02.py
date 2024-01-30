N, X = map(int, input().split())
A = list(map(int, input().split()))

is_exists = False


for a in A:
    if a == X:
        is_exists = True

print("Yes" if is_exists else "No")
