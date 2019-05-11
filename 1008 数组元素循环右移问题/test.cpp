#include <iostream>
using namespace std;

int main() {
    int *p, *a, N, M, i, b;
    cin >> N >> M;
    if (M > N)
        M = M % N;
    p = (int *)malloc(N * sizeof(int));
    a = (int *)malloc(N * sizeof(int));
    for (i = 0; i < N; i++)
        cin >> p[i];
    for (i = 0; i < N - M; i++)
        a[i + M] = p[i];
    for (i = N - 1, b = 0; i >= N - M; i--, b++)
        a[N - i - 1] = p[N - M + b];
    for (i = 0; i < N - 1; i++)
        cout << a[i] << " ";
    cout << a[N - 1] << endl;
    return 0;
}