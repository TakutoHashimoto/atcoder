// https://atcoder.jp/contests/abc083/tasks/abc083_a

#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a + b > c + d) {
        printf("Left\n");
    } else if (a + b < c + d) {
        printf("Right\n");
    } else {
        printf("Balanced\n");
    }
}
