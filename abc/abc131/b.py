N, L = map(int, input().split())

T = [L+i for i in range(N)]
T.sort(key=lambda x: abs(x))

print(sum(T[1:]))
