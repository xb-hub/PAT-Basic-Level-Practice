#include <iostream>
using namespace std;

int main() {
    int n, number;
    cin >> n;
    int num[4], beer[2] = {0};
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 4; i++) {
            cin >> number;
            num[i] = number;
        }
        if (num[0] + num[2] != num[1] && num[0] + num[2] == num[3])
            beer[0]++;
        else if (num[0] + num[2] == num[1] && num[0] + num[2] != num[3])
            beer[1]++;
    }
    cout << beer[0] << " " << beer[1];
}