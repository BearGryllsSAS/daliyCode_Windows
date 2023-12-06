#include <vector>
#include <algorithm>
#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n + 2, vector<int>(7, 0));
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> arr[i][j];
        }
    }

    unordered_set<int> mySet(arr[0].begin(), arr[0].end());

    for (int i = 1; i < n + 1; i++) {
        int temp = 0;

        for (int j = 0; j < 7; j++) {
            if (mySet.find(arr[i][j]) != mySet.end()) {
                temp++;
            }
        }

        arr[n + 1][7 - temp]++; 
    }

    for (int i = 0; i < 7; i++) {
        cout << arr[n + 1][i] << ' ';
    }

    return 0;
}