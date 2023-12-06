#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result;
    result.emplace_back(n);

    while (n != 1) {
        if (n % 2 == 1) {
            n = n * 3 + 1;
        }
        else {
            n = n / 2;
        }
        
        result.emplace_back(n);
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << ' ';
    }

    return 0;
}