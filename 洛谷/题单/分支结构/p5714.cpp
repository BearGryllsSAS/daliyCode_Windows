#include <bits/stdc++.h>
using namespace std;

int main() {
    float m, h;
    cin >> m >> h;

    if (m / (h * h) < 18.5) cout << "Underweight" << endl;
    else if (m / (h * h) >= 18.5 && m / (h * h) < 24) cout << "Normal" << endl;
    else {
        cout << m / (h * h) << endl;

        cout << "Overweight" << endl;
    }


    return 0;
}