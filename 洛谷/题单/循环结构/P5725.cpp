#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int index = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (index < 10) {
                cout << 0 << index;
            }
            else {
                cout << index;
            }
            index++;
        }
        cout << endl;
    }

    cout << endl;

    index = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n * 2 - i * 2; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            if (index < 10) {
                cout << 0 << index;
            }
            else {
                cout << index;
            }
            index++;
        }
        cout << endl;
    }

    return 0;
}