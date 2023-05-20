'''
https://atcoder.jp/contests/abc126/tasks/abc126_a
'''


def get_in_map():
    return map(int, input().split())


def get_string():
    return input()


def main():
    N, K = get_in_map()
    S = list(get_string)

    S[K-1] = S[K-1].lower()
    S = ''.join(S)

    print(S)


if __name__ == '__main__':
    main()


# 改修前
# N, K = map(int, input().split())
# S = list(input())

# S[K-1] = S[K-1].lower()
# S = ''.join(S)

# print(S)