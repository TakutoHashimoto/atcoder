// https://atcoder.jp/contests/abc127/tasks/abc127_a

#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (6 <= A and A <= 12) {
        B /= 2;
    } else if (A <= 5) {
        B = 0;
    }

    cout << B << endl;
}
