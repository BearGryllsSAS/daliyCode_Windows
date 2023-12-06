#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result(n, 0);

    for (int i = 1; i < n; i++) {
        int temp = 0;

        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                temp++;
            }
        }

        result[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}