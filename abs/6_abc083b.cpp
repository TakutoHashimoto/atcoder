#include <iostream>

using namespace std;

int calc_sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (A <= calc_sum(i) && calc_sum(i) <= B) {
            ans += i;
        }
    }

    cout << ans << endl;
}
