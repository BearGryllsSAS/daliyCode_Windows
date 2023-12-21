#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<double>> arr(n, vector<double>(2, 0));
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    unordered_map<int, int> myMap;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= arr[i][1]; j++) {
            myMap[(int)(arr[i][0] * j)]++;
        }
    }

    for (auto& [a, b] : myMap) {
        if (b % 2 == 1) {
            cout << a << endl;

            return 0;
        }
    }

    return 0;
}