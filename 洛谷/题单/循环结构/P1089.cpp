#include <iostream>
using namespace std;

int main() {
    int arr[12];
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }

    int mother = 0;
    int daughter = 0;

    for (int i = 0; i < 12; i++) {
        daughter += 300;
        daughter -= arr[i];

        if (daughter < 0) {
            cout << -(i + 1) << endl;

            return 0;
        }

        if (daughter / 100) {
            int n = daughter / 100;

            mother += n * 100;
            daughter -= n * 100;
        }

        // cout << "daughter: " << daughter << ' ' << "mother: " << mother << endl;
    }

    cout << daughter + mother * 1.2 << endl;

    return 0;
}