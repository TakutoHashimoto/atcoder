#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data(5);

    for (int i = 0; i < data.size(); i++) {
        cin >> data.at(i);
    }

    bool flag = false;
    for (int i = 0; i < data.size()-1; i++) {
        if (data.at(i) == data.at(i+1)) {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
}
