#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int m = n / 7; // 总共多少周
    int d = n % 7; // 剩下多少天

    long long sum = m * 5 * 250;

    while (d--) {
        if (x == 6 || x == 7) {
            if (x == 7) x = 1;
            else x++;

            continue;
        }

        sum += 250;

        if (x == 7) x = 1;
        else x++;
    }

    cout << sum << endl;

    return  0;
}