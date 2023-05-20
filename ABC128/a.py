'''
https://atcoder.jp/contests/abc128/tasks/abc128_a
'''


def get_in_map():
    return map(int, input().split())


def main():
    a, p = get_in_map()

    print((a*3 + p) // 2)


if __name__ == '__main__':
    main()
