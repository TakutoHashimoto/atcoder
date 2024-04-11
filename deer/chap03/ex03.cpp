// https://atcoder.jp/contests/abc153/tasks/abc153_a

#include <iostream>

using namespace std;

int main()
{
    int H, A;
    cin >> H >> A;

    int ans = 0;
    if (H % A == 0) {
        ans = H / A;
    } else {
        ans = H / A + 1;
    }

    cout << ans << endl;
}
