#include <iostream>
#include <map>
#include <vector>
using namespace std;

int m, n, tol;
vector<vector<int>> color;
int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

bool judge(int i, int j)
{
    for(int k = 0; k < 8; k++)
    {
        int tx = i + dir[k][0];
        int ty = j + dir[k][1];
        if(tx >= 0 && tx < n && ty >= 0 && ty < m && (abs(color[tx][ty] - color[i][j]) <= tol))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count = 0, x = 0, y = 0;
    map<int, int> cnt;
    cin >> m >> n >> tol;
    color.resize(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> color[i][j];
            cnt[color[i][j]]++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(judge(i, j) && cnt[color[i][j]] == 1)
            {
                count++;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    if(count == 1)
    {
        printf("(%d, %d): %d", y, x, color[x - 1][y - 1]);
    }
    else if(count == 0)
    {
        cout << "Not Exist";
    }
    else
    {
        cout << "Not Unique";
    }
}