#include <iostream>
using namespace std;
int main() {
    int m, n, a, b, goal;
    int img[500][500];
    cin >> m >> n >> a >> b >> goal;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cin >> img[i][j];
            if (img[i][j] >= a && img[i][j] <= b) img[i][j] = goal;
        }
    for (int i = 0; i < m; i++) {
        printf("%03d", img[i][0]);
        for (int j = 1; j < n; j++) {
            printf(" %03d", img[i][j]);
        }
        printf("\n");
    }
}