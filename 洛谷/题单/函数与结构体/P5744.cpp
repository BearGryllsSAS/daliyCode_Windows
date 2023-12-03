#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

student training(student& stu) {
    stu.score = min(600, stu.score + stu.score * 20 / 100);
    stu.age++;

    return stu;
}

int main() {
    int n;
    cin >> n;

    student arr[n];

    for (int i = 0; i < n; i++) {
        student temp;

        cin >> temp.name;
        cin >> temp.age;
        cin >> temp.score;

        arr[i] = training(temp);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i].name << ' ' << arr[i].age << ' ' << arr[i].score << endl;
    }

    return 0;
}