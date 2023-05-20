'''
https://atcoder.jp/contests/abc126/tasks/abc126_b
'''


def get_string():
    return input()


def is_M(x):
    return 1 <= x <= 12


def main():
    S = get_string()

    a = int(S[:2])
    b = int(S[2:])

    if is_M(a) and is_M(b):
        print('AMBIGUOUS')
    elif is_M(a):
        print('MMYY')
    elif is_M(b):
        print('YYMM')
    else:
        print('NA')


if __name__ == '__main__':
    main()
