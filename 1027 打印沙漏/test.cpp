#include <iostream>
using namespace std;

int main() {
    int n, k = 0, i = 3;
    char c;
    cin >> n >> c;
    int temp = n - 1;
    temp /= 2;
    int sum = 0;
    do {
        sum += i;
        k++;
        i += 2;
    } while (sum <= temp);
    temp = i;
    for (int j = 1; j < k; j++) {
        for (int b = 0; b < (temp - i) / 2; b++)
            cout << " ";
        for (int a = 0; a < i - 4; a++)
            cout << c;
        cout << endl;
        i -= 2;
    }
    for (int j = 1; j < k; j++)
        cout << " ";
    cout << c << endl;
    i += 2;
    for (int j = 1; j < k; j++) {
        for (int b = 0; b < (temp - i) / 2; b++)
            cout << " ";
        for (int a = 0; a < i - 4; a++)
            cout << c;
        cout << endl;
        i += 2;
    }
    sum = sum - i + 4;
    int x = n - sum * 2 - 1;
    cout << x;
    return 0;
}