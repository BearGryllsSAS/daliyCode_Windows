#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double t;
    cin >> t;

    int n;
    cin >> n;

    double result = t / n;
    cout << fixed << setprecision(3) << result << endl;

    cout << n * 2 << endl;

    return 0;
}