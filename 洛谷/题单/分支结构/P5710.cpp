#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    bool bool_1 = x % 2 == 0;
    bool bool_2 = x > 4 && x <= 12;

    if (bool_1 && bool_2) cout << 1 << ' ';
    else cout << 0 << ' ';

    if (bool_1 || bool_2) cout << 1 << ' ';
    else cout << 0 << ' ';

    if ((bool_1 && !bool_2) || (!bool_1 && bool_2)) cout << 1 << ' ';
    else cout << 0 << ' ';

    if (!bool_1 && !bool_2) cout << 1 << ' ';
    else cout << 0 << endl;

    return 0;
}