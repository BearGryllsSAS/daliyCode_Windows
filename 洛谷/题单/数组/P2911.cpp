#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    unordered_map<int, int> myMap;

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                myMap[i + j + k]++;
            }
        }
    }

    int max = 0;
    int maxCount = 0;

    for (auto& [a, b] : myMap) {
        if (b > maxCount) {
            maxCount = b;
            max = a;
        }

        if (b == maxCount && max > a) {
            max = a;
        }
    }

    cout << max << endl;

    return 0;
}