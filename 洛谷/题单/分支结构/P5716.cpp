#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int y, m;
    cin >> y >> m;

    // 闰年二月有29天
    if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m == 2) cout << 29 << endl;
    else cout << arr[m - 1] << endl;

    return 0;
}