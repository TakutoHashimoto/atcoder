N = int(input())
A = list(map(int, input().split()))

denominator = 0
for a in A:
    denominator += 1 / a

print(1/denominator)
