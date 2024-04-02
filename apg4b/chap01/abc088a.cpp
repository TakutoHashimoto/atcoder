// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <iostream>

using namespace std;

int main()
{
    int N, A;

    cin >> N;
    cin >> A;

    bool flag = false;
    if (N % 500 <= A) {
        flag = true;
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
