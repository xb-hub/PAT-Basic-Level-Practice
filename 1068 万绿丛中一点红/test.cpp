#include <iostream>
using namespace std;

int main()
{
    int m, n, tol;
    cin >> m >> n >> tol;
    int color[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> color[i][j];
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //         cout << color[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    bool direct[4];
    for(int i = 0; i < n; i++)
    {
        for(int m = 0; m < 4; m++)
        {
            direct[m] = true;
        }
        if(i == 0)   direct[0] = false;
        if(i == n - 1)  direct[1] = false;
        for(int j = 0; j < m; j++)
        {
            if(j == 0)  direct[2] = false;
            if(j == m -1)   direct[3] = false;
            if(!direct[0] && !direct[3])
            {

            }
            else if(!direct[1] && )
        }
    }
}