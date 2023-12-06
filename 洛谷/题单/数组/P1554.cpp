#include <vector>
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<int> arr(10, 0);

    for (int i = M; i <= N; i++) {
        int temp = i;

        while (temp) {
            arr[temp % 10]++;

            temp /= 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
   
    return 0;
}