#include <iostream>

using namespace std;

int main()
{
    int N, K;
    string S;

    cin >> N >> K;
    cin >> S;

    S.at(K-1) = tolower(S.at(K-1));

    cout << S << endl;
}
