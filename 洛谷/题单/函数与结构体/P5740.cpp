#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int Chinese;
    int Mathmatics;
    int English;

    int getsum() {
        return Chinese + Mathmatics + English;
    }
};

int main() {
    int n;
    cin >> n;

    student stu;
    int sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        student stuTemp;
        cin >> stuTemp.name;
        cin >> stuTemp.Chinese;
        cin >> stuTemp.Mathmatics;
        cin >> stuTemp.English;

        if (stuTemp.getsum() > sum) {
            sum = stuTemp.getsum();

            stu = stuTemp;
        }        
    }

    cout << stu.name << ' ' << stu.Chinese << ' ' << stu.Mathmatics << ' ' << stu.English << endl;
    

    return 0;
}