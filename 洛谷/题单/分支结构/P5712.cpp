#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    string str_1 = "Today, I ate ";
    string str_2;
    string str_3 = " apple";

    if (x > 1) {
        str_3 += "s.";
    }
    else {
        str_3 += '.';
    }

    str_2 = to_string(x);

    // str_2 = x + '0'; 这种方法就不行，因为数字大于10了，而不是单个字符

    cout << str_1 + str_2 + str_3 << endl;

    return 0;
}