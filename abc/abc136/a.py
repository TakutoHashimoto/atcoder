A, B, C = map(int, input().split())

rest = C-(A-B)
print(rest if rest >= 0 else 0)
