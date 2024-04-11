// https://atcoder.jp/contests/abc137/tasks/abc137_a

#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << max(max(A+B, A-B), A*B) << endl;
}
