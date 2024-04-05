#include <iostream>

using namespace std;

int main()
{
    int pattern;
    cin >> pattern;

    if (pattern == 1) {
        int price;
        int N;

        cin >> price;
        cin >> N;

        cout << N * price << endl;
    } else {
        string text;
        int price;
        int N;

        cin >> text;
        cin >> price;
        cin >> N;

        cout << text << "!" << endl;
        cout << N * price << endl;
    }
}
