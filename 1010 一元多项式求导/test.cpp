#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    if (n == 0)
        cout << "0 0";
    else
        cout << a * n << " " << n - 1;
    while (cin >> a >> n) {
        if (n == 0 && a == 0)
            cout << " "
                 << "0 0";
        else if (n != 0) {
            cout << " " << a * n << " " << n - 1;
        }
    }
    return 0;
}