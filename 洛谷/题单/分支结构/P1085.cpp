#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr(7, 0);
    int a, b;

    for (int i = 0; i < 7; i++) {
        cin >> a >> b;
        arr[i] = a + b;
    }

    int maxDay = -1;
    int index = -1;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > 8 && arr[i] > maxDay) {
            maxDay = arr[i];
            index = i;
        }
    }

    if (index == -1) {
        cout << 0 << endl;
    }
    else {
        cout << index + 1 << endl;
    }

    return 0;
}