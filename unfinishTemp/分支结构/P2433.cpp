#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2) {
        cout << 6 << ' ' << 4 << endl;
    }
    else if (T == 3) {
        cout << 3 << endl << 12 << endl << 2 << endl;
    }
    else if (T == 4) {
        cout << fixed << setprecision(3) << 500 / (3 * 1.0) << endl;
    }
    else if (T == 5) {
        cout << (260 + 220) / (12 + 20) << endl;
    }
    else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7) {
        cout << 100 + 10 << endl << 100 + 10 - 20 << endl << 0 << endl;
    }
    else if (T == 8) {
        const double pi = 3.141593;
        cout << pi * 10 << endl << pi * 25 << endl << 4 / 3 * pi * 125 << endl;
        // cout << pi * 10 << endl;
        // cout << pi * 25 << endl;
        // cout << (4 / 3) * pi * 125 << endl;
    }
    else if (T == 9) {
        cout << 22 << endl;
    }
    else if (T == 10) {
        cout << 9 << endl;
    }
    else if (T == 11) {
        cout << 1.0 * 100 / (8 - 5) << endl;
    }
    else if (T == 12) {
        cout << (int)('M' - 'A') + 1 << endl;
        cout << char('A' + 17) << endl;
    }
    else if (T == 13) {
        cout << (int)pow((((4 / 3) * 3.141593 * 4 * 4 * 4) + ((4 / 3) * 3.141593 * 10 * 10 * 10)), 1 / 3.0) << endl;
        // cout << (int)cbrt((((4 / 3) * 3.141593 * 4 * 4 * 4) + ((4 / 3) * 3.141593 * 10 * 10 * 10))) << endl;
    }
    else if (T == 14) {
        int price = 110;
        int people = 10;

        int result = INT_MAX;

        while (price) {
            if (price * people == 3500) {
                result = min(result, price);
            }

            price--;
            people++;
        }

        cout << result << endl;
    }

    return 0;
}
