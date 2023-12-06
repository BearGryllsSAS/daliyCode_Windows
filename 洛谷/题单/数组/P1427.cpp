#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> result(100, 0);

    int index = -1;

    for (int i = 0; ; i++) {
        cin >> result[i];

        if (result[i] == 0) break;

        index = i;
    }

    for (int i = index; i >= 0; i--) {
        cout << result[i] << ' ';
    }

    return 0;
}