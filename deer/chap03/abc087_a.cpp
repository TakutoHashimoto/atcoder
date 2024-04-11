// https://atcoder.jp/contests/abc087/tasks/abc087_a

#include <iostream>

using namespace std;

int main()
{
    int X, A, B;
    cin >> X >> A >> B;

    int ans = (X - A) % B;
    cout << ans << endl;
}
