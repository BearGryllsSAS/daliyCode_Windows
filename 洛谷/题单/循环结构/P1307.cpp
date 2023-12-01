#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int flag = true;    //ture 表示N为正数
    if (N < 0) {
        N = -N;
        flag = false;
    }

    if (N % 10 == 0) {
        N /= 10;
    }    

    int result = 0;

    while (N) {
        result = result * 10 + N % 10;
        N /= 10;
    }

    if (flag == false) {
        result = -result;
    }

    cout << result << endl;

    return 0;
}