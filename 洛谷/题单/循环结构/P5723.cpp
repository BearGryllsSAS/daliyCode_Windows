#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    cin >> L;

    bool flag = true;
    vector<int> result;
    int sum = 0;

    for (int i = 2; sum <= L; i++) {
        flag = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }

        if (flag == true) {
            result.emplace_back(i);
            sum += i;
        }
    }

    if (sum > L) {
        result.pop_back();
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    cout << result.size() << endl;

    return 0;
}