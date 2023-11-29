#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    string str;
    cin >> str;

    int result[3];
    for (int i = 0; i < 3; i++) {
        if (str[i] == 'A') result[i] = arr[0];
        if (str[i] == 'B') result[i] = arr[1];
        if (str[i] == 'C') result[i] = arr[2];
    }

    cout << result[0] << ' ' << result[1] << ' ' << result[2] << endl;

    return 0;
}