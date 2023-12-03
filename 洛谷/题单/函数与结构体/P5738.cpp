#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[m];
    double result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
        }

        sort(arr, arr + m);

        double temp = 0;
        for (int j = 1; j < m - 1; j++) {
            temp += arr[j];
        }

        result = max(result, temp / (m - 2));
    }

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}