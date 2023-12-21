#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

bool isZhiShu(int& num) {
    // 再判断质数
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 6 != 1 && num % 6 != 5) return false;
    for (int i = 5; i <= sqrt(num); i += 6) if (num % i == 0 || num % (i + 2) ==0) return false;

    return true;
}

bool isTrue(int& num) {
    // 先判断回文    
    int temp = num;

    if (num < 10) return isZhiShu(num);

    arr.clear();

    while (temp) {
        arr.emplace_back(temp % 10);
        temp /= 10;
    }

    for (int i = 0, j = arr.size() -1; i < j; i++, j--) {
        if (arr[i] != arr[j]) return false;
    }

    return isZhiShu(num);
}

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> result;

    for (int i = a; i <= b; i++) {
        // cout << i << ' ';

        if (i % 2 == 0) continue;

        if (isTrue(i)) result.emplace_back(i);
    }

    for (int i = 0; i < result.size(); i++) cout << result[i] << endl;

    return 0;
}