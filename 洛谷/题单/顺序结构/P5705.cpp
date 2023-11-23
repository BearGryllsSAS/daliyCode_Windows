#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num;

    int temp = num * 10;
    double result = 0;

    while (temp) {
        result = result * 10 + temp % 10;
        temp /= 10;
    }

    // result /= 1000;

    cout << result / 1000 << endl;

    return 0;
}