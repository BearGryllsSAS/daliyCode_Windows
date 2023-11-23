#include <iostream>
using namespace std;

int main() {

    char c;
    cin >> c;

    int star = 1;

    for (int i = 1; i <= 3; i++) {
        int blank = 3 - i;
        while (blank--) {
            cout << ' ';
        }

        int temp = star;
        while (temp--) {
            cout << c;
        }

        cout << endl;

        star += 2;
    }

    return 0;
}