#include <iostream>
using namespace std;

int main() {

    int temp = 1;

    for (int i = 1; i <= 3; i++) {
        int Spacebar = 3 - i;
        while (Spacebar--) {
            cout << ' ';
        }

        int star = temp;
        while (star--) {
            cout << '*';
        }

        cout << endl;

        temp += 2;
    }

    temp -= 2;

    for (int i = 2; i >= 1; i--) {
        int spacebar = 3 - i;
        while (spacebar--) {
            cout << ' ';
        }

        temp -= 2;

        int star = temp;
        
        while (star--) {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}