from typing import List


def binary_search(x: int, A: List[int]) -> int:
    L = 0
    R = N - 1

    while L <= R:
        M = (L + R) // 2
        
        if x < A[M]:
            R = M - 1
        if x == A[M]:
            return M
        if x > A[M]:
            L = M + 1

    return -1


N, X = map(int, input().split())
A = list(map(int, input().split()))

ans = binary_search(X, A)
print(ans + 1)
