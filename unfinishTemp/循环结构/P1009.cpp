#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;
    int k = 1;

    for (int i = 1; i <= n; i++) {
        k *= i;
        result += k;
    }

    cout << result << endl;

    return 0;
}