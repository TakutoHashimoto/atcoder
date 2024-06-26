#include <iostream>
#include <vector>

using namespace std;

vector<int> input(int N) {
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    return vec;
}

int sum(vector<int> scores) {
    int sum = 0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores.at(i);
    }
    return sum;
}

void output(int a, int b, int c) {
    cout << a * b * c << endl;
}

int main()
{
    int N;
    cin >> N;

    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    int sum_A = sum(A);
    int sum_B = sum(B);
    int sum_C = sum(C);

    output(sum_A, sum_B, sum_C);
}
