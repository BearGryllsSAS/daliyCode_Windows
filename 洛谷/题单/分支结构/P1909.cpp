#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x1, y1, x2, y2, x3, y3;

    cin >> n >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int result1 = ceil(n / (x1 * 1.0)) * y1;
    int result2 = ceil(n / (x2 * 1.0)) * y2;
    int result3 = ceil(n / (x3 * 1.0)) * y3;

    cout << min(result1, min(result2, result3)) << endl;

    return 0;
}