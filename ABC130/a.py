"""
https://atcoder.jp/contests/abc130/tasks/abc130_a
"""


def get_int_map():
    return map(int, input().split())


def main():
    X, A = get_int_map()

    print(0 if X<A else 10)


if __name__ == "__main__":
    main()
