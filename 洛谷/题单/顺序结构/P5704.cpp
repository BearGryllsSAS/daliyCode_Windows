#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    /*两种方法选一个，不能直接cout << c - 32 << enld*/
    // char result = c - 32;
    c -= 32;

    cout << c << endl;

    return 0;
}