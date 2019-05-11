#include <iostream>

using namespace std;

int main() {
    int m, test, temp;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int len = 1, flag = 0;
        cin >> test;
        int t = test;
        while (t) {
            len *= 10;
            t /= 10;
        }
        // cout << len <<endl;
        for (int i = 1; i < 10; i++) {
            temp = i * test * test;
            if ((temp - test) % len == 0) {
                cout << i << " " << temp << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "No" << endl;
    }
}