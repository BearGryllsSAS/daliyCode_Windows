#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    double sum = 1;
    int index = 2;
    while (sum <= k) {
        sum += 1 / (index * 1.0);
        index++;
    }

    cout << --index << endl;
    
    return 0;
}