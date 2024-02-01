S = input()
N = len(S)

ans = "Good"
for i in range(N-1):
    if S[i] == S[i+1]:
        ans = "Bad"
        break

print(ans)
