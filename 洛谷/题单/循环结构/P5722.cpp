#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = (1 + n) * (n / 2);

    if (n % 2 == 1) {
        result += (1 + n) / 2;
    }

    cout << result << endl;

    return 0;
}