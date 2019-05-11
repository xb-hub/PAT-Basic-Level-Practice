#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    double n;
    char c;
    cin >> n >> c;
    int n1 = (int)round(n / 2.0);
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n1 - 1)
                cout << c;
            else {
                if (j == 0 || j == n - 1)
                    cout << c;
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}