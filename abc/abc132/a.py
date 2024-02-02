S = input()

flag = True
for s in set(S):
    if S.count(s) != 2:
        flag = False
        break

print("Yes" if flag else "No")
