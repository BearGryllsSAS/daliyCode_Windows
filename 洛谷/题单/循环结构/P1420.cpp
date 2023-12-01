#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 1;
    int index = -1;

    for (int i = 1; i < n; i++) {
        index = i - 1;

        int j = i;
        while (j < n && arr[j] == arr[j -1] + 1) {
            j++;
        }

        result = max(result, j - i + 1);

        i = j;
    }

    cout << result << endl;

    return 0;
}