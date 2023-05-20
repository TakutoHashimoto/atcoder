'''
https://atcoder.jp/contests/abc128/tasks/abc128_b
'''


def get_int():
    return int(input())


def get_string_list_row(n):
    return [[input().split(), i+1] for i in range(n)]


def main():
    n = get_int()
    s = get_string_list_row(n)

    for i in range(len(s)):
        s[i][0][1] = 100 - int(s[i][0][1])

    s.sort()

    for d in s:
        print(d[1])


if __name__ == '__main__':
    main()