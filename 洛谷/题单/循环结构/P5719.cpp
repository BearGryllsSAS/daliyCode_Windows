#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sumA = 0, countA = 0;
    int sumB = 0, countB = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sumA += i;
            countA++;
        }   
        else {
            sumB += i;
            countB++;
        }
    }

    cout << fixed << setprecision(1) << sumA / (countA * 1.0) << ' ' << sumB / (countB * 1.0) << endl;

    return 0;
}