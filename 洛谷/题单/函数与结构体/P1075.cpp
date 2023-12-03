#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    /*
    for (int i = n - 1; i >= 2; i++) {
        if (n % i == 0) {
            cout << i << endl;
            break;
        }
    }
    */

   
   for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << n / i << endl;
            break;
        }
   }

    return 0;
}