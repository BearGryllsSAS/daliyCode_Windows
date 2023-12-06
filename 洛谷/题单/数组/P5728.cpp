#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

static bool emp(const vector<int>& a, const vector<int>& b) {
    return a[3] < b[3];
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(4, 0));

    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        
        arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
    }

    sort(arr.begin(), arr.end(), emp);

    int result = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if(arr[j][3] - arr[i][3] > 10) {
                 break;
            }
            else {
                if ((abs(arr[j][0] - arr[i][0]) <= 5) && (abs(arr[j][1] - arr[i][1]) <= 5) && (abs(arr[j][2] - arr[i][2]) <= 5)) {
                    result++;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}