#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num, sum = 0;
    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    double A4 = 0;
    vector<int> v[5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num % 5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1) {
                if (j % 2)
                    A2 -= v[i][j];
                else
                    A2 += v[i][j];
            }
            if (i == 2) {
                A3 = v[2].size();
                break;
            }
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i) {
            cout << " ";
        }
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            cout << "N";
            continue;
        }
        if (i == 0) cout << A1;
        if (i == 1) cout << A2;
        if (i == 2) cout << A3;
        if (i == 3) printf("%.1lf", A4 / v[3].size());
        if (i == 4) cout << A5;
    }
}