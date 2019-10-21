#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int n, temp, m, t = 0;
    cin >> n;
    vector<int> a(n);
    for (temp = sqrt((double)n); temp >= 1; temp--)
    {
        if (n % temp == 0)
        {
            m = n / temp;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    // for(int i = 0; i < n; i++)
    // {
    //     cout << a[i] << "   ";
    // }
    // cout << endl;
    vector<vector<int>> result(m, vector<int>(temp));
    int level = m / 2 + m % 2;
    for(int i = 0; i < level; i++)
    {
        for(int j = i; j < temp - i && t <= n - 1; j++)
        {
            result[i][j] = a[t++];
        }
        for(int j = i + 1; j < m - i && t <= n - 1; j++)
        {
            result[j][temp - i - 1] = a[t++];
        }
        for(int j = temp - i - 2; j >= i && t <= n - 1; j--)
        {
            result[m - i - 1][j] = a[t++];
        }
        for(int j = m - i - 2; j > i && t <= n - 1; j--)
        {
            result[j][i] = a[t++];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < temp; j++)
        {
            printf("%d", result[i][j]);
            if (j != temp - 1) printf(" ");
        }
        printf("\n");
    }
}