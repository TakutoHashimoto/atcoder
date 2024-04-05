#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> A(N);

    // 入力
    for (int i = 0; i < A.size(); i++) {
        cin >> A.at(i);
    }

    // 合計の計算
    int sum = 0;
    for (int i = 0; i < A.size(); i++) {
        sum += A.at(i);
    }

    int average = sum / A.size();

    // 各点数と平均との差の計算
    for (int i = 0; i < A.size(); i++) {
        cout << abs(A.at(i) - average) << endl;
    }
}
