#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    int count = 1;
    int loop = n / 2;
    int offsize = 1;
    int start = 0;

    while (loop--) {
        int i = start, j = start;

        for (; j < n - offsize; j++) {
            arr[i][j] = count++;
        }

        for (; i < n - offsize; i++) {
            arr[i][j] = count++;
        }

        for (; j > start; j--) {
            arr[i][j] = count++;
        }

        for (; i > start; i--) {
            arr[i][j] = count++;
        }

        start++;
        offsize++;
    }

    if (n % 2 == 1) arr[start][start] = count;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < 10) cout << "  ";
            else if (arr[i][j] < 100) cout << ' ';

            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}