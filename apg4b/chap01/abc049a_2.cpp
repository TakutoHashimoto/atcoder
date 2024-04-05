// https://atcoder.jp/contests/abc049/tasks/abc049_a

#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    const string vowels = "aeiou";

    if (vowels.find(c)) {
        cout << "vowel" << endl;
    } else {
        cout << "consonant" << endl;
    }
}
