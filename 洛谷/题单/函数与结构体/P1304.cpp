#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 6 != 1 && n % 6 != 5) return false;
    for (int i = 5; i <= sqrt(n); i += 6) if (n % i == 0 || n % (i + 2) == 0) return false;    

    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 4; i <= N; i += 2) {
        for (int j = 2; j <= N / 2; j++) {
            if (isprime(j) && isprime(i - j)) {
                cout << i << '=' << j << '+' << i - j << endl;
                break;
            } 
        }
    }

    return 0;
}