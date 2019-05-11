#include <iostream>
using namespace std;

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    int sum = a + b;
    int i = 0;
    int arr[31];
    do {
        arr[i] = sum % d;
        sum /= d;
        i++;
    } while (sum != 0);
    for (i -= 1; i >= 0; i--)
        cout << arr[i];
}