// https://atcoder.jp/contests/abc049/tasks/abc049_a

#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "vowel" << endl;
    } else {
        cout << "consonant" << endl;
    }
}
