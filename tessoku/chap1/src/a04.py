N = int(input())

for n in range(9, -1, -1):
    divisor = 2 ** n
    print((N // divisor) % 2, end="")

print("")
