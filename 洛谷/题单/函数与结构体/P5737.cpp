#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<int> result;

    for (int i = x; i <= y; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            result.emplace_back(i);
        }
    }

    cout << result.size() << endl;

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }

    return 0;
}