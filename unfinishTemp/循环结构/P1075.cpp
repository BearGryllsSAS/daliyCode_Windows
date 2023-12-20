#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = -1;
    bool flag = true;

    for (int i = n - 1; i >= 2; i++) {
        flag = true;

        // 如果i能被n整除
        if (n % i == 0) {
            // 判断相乘的两个数是否为质数
            for (int j = 2; j < i; j++){
                if (i % j == 0) {
                    flag = false;
                    break;
                }
            }

            if (flag == false) {
                continue;
            }
            
            for (int j = 2; j < n / i; j++){
                if ((n / i) % j == 0) {
                    flag = false;
                    break;
                }
            }
            
            if (flag == false) {
                continue;
            }

            result = i;
            break;
        }
    }

    cout << result << endl;

    return 0;
}