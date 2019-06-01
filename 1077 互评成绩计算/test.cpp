#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int temp;
    int result;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int g1 = 0, g2 = 0, count = 0, max = -1, min = m + 1;
        cin >> g1;
        for (int j = 1; j < n; j++) {
            cin >> temp;
            if (temp <= m && temp >= 0) {
                if (temp > max) max = temp;
                if (temp < min) min = temp;
                g2 += temp;
                count++;
            }
        }
        g2 = (g2 - min - max) * 1.0 / (count - 2);
        result = (g1 + g2) * 1.0 / 2 + 0.5;
        cout << result << endl;
    }
}