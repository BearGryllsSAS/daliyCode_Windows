#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (result > arr[i]) {
            result = arr[i];
        }
    }

    cout << result << endl;

    return 0;
}