#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int ans = 1;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == '+') {
            ans++;
        } else if (S.at(i) == '-') {
            ans--;
        }
    }

    cout << ans << endl;
}
