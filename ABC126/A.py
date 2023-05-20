'''
https://atcoder.jp/contests/abc126/tasks/abc126_a
'''

N, K = map(int, input().split())
S = list(input())

S[K-1] = S[K-1].lower()
S = ''.join(S)

print(S)