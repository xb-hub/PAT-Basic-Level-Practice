#include <iostream>
#define MaxSize 10
using namespace std;

void combination(int a[], int n, int &sum) {
    int temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (j == i)
                continue;
            else {
                temp = a[i] * 10 + a[j];
                sum += temp;
            }
        }
}

int main() {
    int n, a[MaxSize], sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    combination(a, n, sum);
    cout << sum;
    return 0;
}