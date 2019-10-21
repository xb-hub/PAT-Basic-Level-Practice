#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Choose
{
    int score;
    int nums;
    string answer;
} choose[101];

/**
 * 测试点0输入n, m后有空格
 */
int main()
{
    string n_m;
    int n, m;
    // cin >> n >> m;
    getline(cin, n_m);
    int b = 0;
    for(int i = 0; i < n_m.size(); i++)
    {
        if(n_m[i] == ' ')
        {
            b = i;
            break;
        }
    }
    string s_n = n_m.substr(0, b);
    string s_m;
    if(n_m[n_m.size() - 1] == ' ')   s_m = n_m.substr(b + 1, n_m.size() - b - 2);
    else    s_m = n_m.substr(b + 1, n_m.size() - b - 1);
    n = atoi(s_n.c_str());
    m = atoi(s_m.c_str());
    // cout << n << " " << m;
    int error[101] = {0};
    string s;
    for(int i = 0; i < m; i++)
    {
        getline(cin, s);
        choose[i].score = s[0] - '0';
        choose[i].nums = s[4] - '0';
        choose[i].answer = s.substr(6, s.size() - 6);
    }
    for(int i = 0; i < n; i++)
    {
        int score = 0, site = 1;
        getline(cin, s);
        for(int j = 0; j < m; j++)
        {
            int num = s[site] - '0';
            // if(num != choose[j].nums)
            // {
            //     if(j != m - 1)
            //     {
            //         error[j]++;
            //         site += (num * 2 + 4);
            //         continue;
            //     }
            //     else
            //     {
            //         error[j]++;
            //         site = 1;
            //         continue;
            //     }   
            // }
            string c;
            c = s.substr(site + 2, num * 2 - 1);
            // cout << c << " " << choose[j].answer << endl;
            if(!c.compare(choose[j].answer))   score += choose[j].score;
            else    error[j]++;
            site += (num * 2 + 4);
        }
        printf("%d\n", score);
    }
    int max_error = 0;
    for(int i = 0; i < m; i++)
    {
        if(error[i] > max_error)
        {
            max_error = error[i];
        }
    }
    if(max_error == 0)
    {
        printf("Too simple");
    }
    else
    {
        printf("%d", max_error);
        for(int i = 0; i < m; i++)
        {
            if(error[i] == max_error)
            {
                printf(" %d", i + 1);
            }
        }
    }
}