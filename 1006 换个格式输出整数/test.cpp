#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, i;
    cin >> n;
    a = n / 100;
    b = n / 10 - a * 10;
    c = n - a * 100 - b * 10;
    for (i = 0; i < a; i++)
        cout << 'B';
    for (i = 0; i < b; i++)
        cout << 'S';
    for (i = 0; i < c; i++)
        cout << i + 1;
    cout << endl;
    return 0;
}