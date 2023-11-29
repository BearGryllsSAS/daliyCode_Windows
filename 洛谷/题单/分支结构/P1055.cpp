#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int result = 0;
    int count = 0;

    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == '-') continue;

        count++;

        result += count * (str[i] - '0');
    }

    char flag;

    if (result % 11 == 10) {
        flag = 'X';
    }
    else {
        flag = (result % 11) + '0';
    }

    if (str[str.size() - 1] == flag) {
        cout << "Right" << endl;
    }
    else {
        str[str.size() - 1] = flag;
        cout << str << endl;
    }

    return 0;
}