#include <bits/stdc++.h>
using namespace std;

#define PI 3.14

int main() {
    int h, r;
    cin >> h >> r;

    cout << ceil(20000 / (PI * r * r * h));

    return 0;
}