#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n / (52 * 7) - 3;
    int k = 1;

    while (x > 100) {
        x -= 3;
        k++;
    }    

    cout << x << endl << k << endl;

    return 0;
}