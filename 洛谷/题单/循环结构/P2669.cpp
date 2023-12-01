#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int result = 0;

    int temp_1 = 1;
    int temp_2 = 1;

    for (int i = 0; i < k; i++) {
        result += temp_2;

        if(--temp_1 == 0) {
            temp_2++;
            temp_1 = temp_2;
        }
    }

    cout << result << endl;

    return 0;
}