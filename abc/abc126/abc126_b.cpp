#include <iostream>

using namespace std;

int main()
{
    int S;
    cin >> S;

    int YY = S / 100;
    int MM = S % 100;

    bool YYMM = false;
    if (1 <= MM and MM <= 12) {
        YYMM = true;
    }

    bool MMYY = false;
    if (1 <= YY and YY <= 12) {
        MMYY = true;
    }

    if (YYMM and MMYY) {
        cout << "AMBIGUOUS" << endl;
    } else if (YYMM) {
        cout << "YYMM" << endl;
    } else if (MMYY) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }
}
