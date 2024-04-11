// https://atcoder.jp/contests/abc064/tasks/abc064_a

#include <iostream>

using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;

    bool flag = false;
    if ((10*g + b) % 4 == 0) {
        flag = true;
    }

    cout << (flag ? "YES" : "NO") << endl;
}
