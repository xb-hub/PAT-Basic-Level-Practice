#include <iostream>
#define MaxSize 11
using namespace std;

void compute(int a, int &da) {
    int num[MaxSize] = {0};
    int temp = da;
    int temp1 = da;
    while (a > 0) {
        num[a % 10]++;
        a /= 10;
    }
    if (!num[temp])
        da = 0;
    else {
        for (int i = 1; i < num[temp]; i++) {
            temp1 = temp1 * 10;
            da = temp1 + da;
        }
    }
}

int main() {
    int a, da, a1, da1;
    cin >> a >> da >> a1 >> da1;
    compute(a, da);
    compute(a1, da1);
    cout << da + da1;
    return 0;
}