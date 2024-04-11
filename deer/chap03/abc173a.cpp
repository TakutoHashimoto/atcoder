// https://atcoder.jp/contests/abc173/tasks/abc173_a

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = N % 1000;
    int ans;
    if (res == 0) {
        ans = res;
    } else {
        ans = 1000 - res;
    }

    cout << ans << endl;
}
