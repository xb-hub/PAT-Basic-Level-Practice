#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m, sell[100][1000], sum[1000];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            cin >> sell[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            sum[i] += sell[j][i];
    int Max = sum[0], kind[1000], a = 0;
    for (int i = 1; i < n; i++)
        if (sum[i] > Max) 
            Max = sum[i];
    cout << Max << endl;
    for (int i = 0; i < n; i++)
        if (sum[i] == Max) {
            kind[a] = i + 1;
            a++;
        }
    sort(kind, kind + a);
    for (int i = 0; i < a - 1; i++)
        cout << kind[i] << " ";
    cout << kind[a - 1];
}