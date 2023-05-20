'''
https://atcoder.jp/contests/abc127/tasks/abc127_b
'''


def get_in_map():
    return map(int, input().split())


def calc_weight(r, d, x):
    return r * x - d

def main():
    r, d, x = get_in_map()

    for _ in range(10):
        x = calc_weight(r, d, x)
        print(x)


if __name__ == '__main__':
    main()