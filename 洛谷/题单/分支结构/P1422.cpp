#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x <= 150) {
        // printf("%.1lf\n", x * 0.4463);   能通过
        cout << fixed << setprecision(1) << x * 0.4463 << endl;
        // cout << x * 0.4463 << endl;
    }
    else if (x > 150 && x <= 400) {
        // printf("%.1lf\n", (150 * 0.4463) + ((x - 150) * 0.4663));    能通过
        cout << fixed <<  setprecision(1) << (150 * 0.4463) + ((x - 150) * 0.4663) << endl;
        // cout << (150 * 0.4463) + ((x - 150) * 0.4663) << endl;
    }
    else {
        // printf("%.1lf\n", (150 * 0.4463) + ((400 - 150) * 0.4663) + ((x - 400) * 0.5663));   能通过
        cout << fixed <<  setprecision(1) << (150 * 0.4463) + ((400 - 150) * 0.4663) + ((x - 400) * 0.5663) << endl;
        // cout << (150 * 0.4463) + ((400 - 150) * 0.4663) + ((x - 400) * 0.5663) << endl;
    }


    return 0;
}