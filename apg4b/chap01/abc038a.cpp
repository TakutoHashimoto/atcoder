// https://atcoder.jp/contests/abc038/tasks/abc038_a

#include <iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    if (S.at(S.size()-1) == 'T') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
