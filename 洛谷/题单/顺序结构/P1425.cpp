#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c) {
        cout << 0 << ' ' << d - b << endl;
    }
    else {
        if (d > b) {
            cout << c - a << ' ' << d - b << endl;
        }
        else {
            cout << c - a - 1 << ' ' << d + 60 - b << endl;
        }
    }

    return 0;
}