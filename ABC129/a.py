"""
https://atcoder.jp/contests/abc129/tasks/abc129_a
"""


def get_int():
    return map(int, input().split())


def main():
    P, Q, R = get_int()

    print(min(P+Q, Q+R, R+P))


if __name__ == "__main__":
    main()
