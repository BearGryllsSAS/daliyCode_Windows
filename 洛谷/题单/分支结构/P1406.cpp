#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int h;
    cin >> h;

    int result = 0;
    for (int i = 0; i < 10; i++) {
        if (h + 30 >= arr[i]) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}