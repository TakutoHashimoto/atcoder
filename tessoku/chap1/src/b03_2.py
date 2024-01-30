from itertools import combinations


N = int(input())
A = list(map(int, input().split()))

ans = any(sum(combination) == 1000 for combination in  combinations(A, 3))


# 内包表記を使わないと以下のような書き方になる
# ans = False

# for combination in combinations(A, 3):
#     if sum(combination) == 1000:
#         ans = True
#         break
