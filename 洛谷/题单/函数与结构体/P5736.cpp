#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 6 != 1 && n % 6 != 5) return false;
    for (int i = 5; i <= sqrt(n); i += 6) if (n % i == 0 || n % (i + 2) == 0) return false;

    return true;
}


/*
bool isprime(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}
*/


int main() {
    int n;
    cin >> n;

    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;

        if (isprime(temp)) cout << temp << ' ';
    }

    return 0;
}