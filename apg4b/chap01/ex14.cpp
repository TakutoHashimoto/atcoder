#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >>C;

    int max_height = max(max(A, B), C);
    int min_height = min(min(A, B), C);
    int diff = max_height - min_height;

    cout << diff << endl;
}
