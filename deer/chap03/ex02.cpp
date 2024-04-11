// https://atcoder.jp/contests/abc086/tasks/abc086_a

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool flag = (a*b % 2 == 0);

    if (flag) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}
