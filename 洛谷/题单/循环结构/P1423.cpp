#include <bits/stdc++.h>
using namespace std;

int main() {
    double s;
    cin >> s;

    double pre = 2;
    double sum = 2;
    int result = 1;

    while (sum < s) {
        pre = pre / 100 * 98;
        sum += pre;
        result++;
    }

    cout << result << endl;

    return 0;
}