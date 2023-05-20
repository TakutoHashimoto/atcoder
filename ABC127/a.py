'''
https://atcoder.jp/contests/abc127/tasks/abc127_a
'''


def get_in_map():
    return map(int, input().split())


def main():
    a, b = get_in_map()

    if a <= 5:
        print(0)
    elif 6 <= a <= 12:
        print(b//2)
    else:
        print(b)


if __name__ == '__main__':
    main()
