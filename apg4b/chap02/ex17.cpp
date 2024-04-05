#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;

    vector<int> A(N), P(N);
    for (int i = 0; i < A.size(); i++) {
        cin >> A.at(i);
    }

    for (int i = 0; i < P.size(); i++) {
        cin >> P.at(i);
    }

    int ans = 0;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < P.size(); j++) {
            if (A[i] + P[j] == S) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}
