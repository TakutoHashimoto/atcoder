#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0;
    for (char str : s) {
        if (str == '1') {
            ans++;
        }
    }

    cout << ans << endl;
}
