// https://atcoder.jp/contests/abc088/tasks/abc088_a

#include <iostream>

using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    bool flag = false;
    if (N%500 <= A) {
        flag = true;
    }

    cout << (flag ? "Yes" : "No") << endl;
}
