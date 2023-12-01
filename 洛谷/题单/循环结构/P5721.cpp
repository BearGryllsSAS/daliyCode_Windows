#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int index = 1;

    // 输出数据---输出n层
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j >= 1; j--) {
            if (index < 10) {
                cout << 0 << index;
            }
            else {
                cout << index;
            }
            index++;
        }
        cout << endl;
    }
    
    return 0;
}