#include <iostream>
#include <algorithm>
#include <vector>
#define MaxSize 10000
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int a[MaxSize] = {0};
    int k, n, flag = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2)
                n = 3 * n + 1;
            n = n / 2;
            if (a[n] == 1)
                break;
            a[n] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        if (a[v[i]] == 0){
            if (flag == 1)
                cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}