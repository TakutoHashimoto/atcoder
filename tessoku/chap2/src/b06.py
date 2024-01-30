N = int(input())
A = list(map(int, input().split()))
Q = int(input())
L = [None] * Q
R = [None] * Q
for i in range(Q):
    L[i], R[i] = map(int, input().split())

# アタリとハズレそれぞれの累積和を求める
atari = [0] * (N + 1)
hazure = [0] * (N + 1)
for i in range(1, N + 1):
    atari[i] = atari[i - 1]
    if A[i - 1] == 1:
        atari[i] += 1
    
    hazure[i] = hazure[i - 1]
    if A[i - 1] == 0:
        hazure[i] += 1

# 質問に答える
for i in range(Q):
    num_atari = atari[R[i]] - atari[L[i] - 1]
    num_hazure = hazure[R[i]] - hazure[L[i] - 1]
    
    if num_atari > num_hazure:
        print("win")
    elif num_atari < num_hazure:
        print("lose")
    else:
        print("draw")
