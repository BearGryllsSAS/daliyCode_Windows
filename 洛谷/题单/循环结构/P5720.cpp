#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    int result = 1;

    while (a != 1) {
        result++;
        a /= 2;
    }

    cout << result << endl;

    return 0;
}