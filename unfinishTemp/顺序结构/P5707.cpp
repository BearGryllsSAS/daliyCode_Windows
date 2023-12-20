#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, v;
    cin >> s >> v;

    int m = ceil(s / (v * 1.0)) + 10;

    int h = m / 60;
    m %= 60;

    if (m == 0) {
        // 如果分钟数为零

        if (h < 8) {
            // 当天出发
            cout << 0 << 8 - h << ':' << 0 << 0 << endl;
        }
        else {
            // 提前一天出发
            if (24 - (h - 8) == 24) cout << 0 << 0 << ':' << 0 << 0 << endl;
            else if (24 - (h - 8) < 10) cout << 0 << 24 - (h - 8) << ':' << 0 << 0 << endl;
            else cout << 24 - (h - 8) << ':' << 0 << 0 << endl;
        }
    }
    else {
        // 如果分钟数不为零

        if (h < 8) {
            // 当天出发
            if (60 - m < 10) {
                cout << 0 << 8 - h - 1 << ':' << 0 << 60 - m << endl;
            }
            cout << 0 << 8 - h - 1 << ':' << 60 - m << endl;
        }
        else {
            // 提前一天出发
            if (60 - m < 10) {
                if ((24 - (h - 8) - 1) < 10) cout << 0 << 24 - (h - 8) - 1 << ':' << 0 << 60 - m << endl;
                else cout << 24 - (h - 8) - 1 << ':' << 0 << 60 - m << endl;
            }
            if ((24 - (h - 8) - 1) < 10) cout << 0 << 24 - (h - 8) - 1 << ':' << 60 - m << endl;
            else cout << 24 - (h - 8) - 1 << ':' << 60 - m << endl;
        }
    }

    return 0;
}