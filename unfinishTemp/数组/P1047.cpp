#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

static bool emp(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) return a[1] < b[1];

    return a[0] < b[0];
}

int main() {
    int l, m;
    cin >> l >> m;

    vector<vector<int>> arr(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    if (m == 1) {
        cout << (l + 1) - (arr[0][1] - arr[0][0] + 1) << endl;
        
        return 0;
    }

    sort(arr.begin(), arr.end(), emp);

    int sum = 0;
    int index = 0;

    int i = -1;

    for (i = 1; i < m; i++) {
        if (arr[i][0] > arr[i - 1][1]) {
            sum += arr[i - 1][1] - arr[index][0] + 1;

            index = i;
        }
    }

    sum += arr[i - 1][1] - arr[index][0] + 1;

    cout << (l + 1) - sum << endl;

    return 0;
}