#include <iostream>

using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    for (int i = 1; i <= N; i++) {
        string op;
        int B;
        cin >> op >> B;

        if (op == "+") {
            A += B;
        } else if (op == "-") {
            A -= B;
        } else if (op == "*") {
            A *= B;
        } else if (op == "/" && B != 0) {
            A /= B;
        } else {
            cout << "error" << endl;
            break;
        }

        cout << i << ":" << A << endl;
    }
}
