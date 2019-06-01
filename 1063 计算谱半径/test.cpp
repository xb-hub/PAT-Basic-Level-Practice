#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double n, a, b, r, max;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        r = sqrt(a * a + b * b);
        if (r > max) max = r;
    }
    printf("%.2lf", max);
}