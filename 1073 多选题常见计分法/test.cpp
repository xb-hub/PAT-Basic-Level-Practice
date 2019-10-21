#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Choose
{
    int score;
    int nums;
    map<char, bool> answer;
} choose[101];

/**
 * 测试点0输入n, m后有空格
 */
int main()
{
    string n_m;
    int n, m;
    cin >> n >> m;
    // getline(cin, n_m);
    // int b = 0;
    // for(int i = 0; i < n_m.size(); i++)
    // {
    //     if(n_m[i] == ' ')
    //     {
    //         b = i;
    //         break;
    //     }
    // }
    // string s_n = n_m.substr(0, b);
    // string s_m;
    // if(n_m[n_m.size() - 1] == ' ')   s_m = n_m.substr(b + 1, n_m.size() - b - 2);
    // else    s_m = n_m.substr(b + 1, n_m.size() - b - 1);
    // n = atoi(s_n.c_str());
    // m = atoi(s_m.c_str());
    // cout << n << " " << m;
    vector<vector<int>> error;
    error.resize(m, vector<int>(5));
    string s, temp;
    for(int i = 0; i < m; i++)
    {
        getline(cin, s);
        choose[i].score = s[0] - '0';
        choose[i].nums = s[4] - '0';
        temp = s.substr(6, s.size() - 6);
        for(int j = 0; j < temp.size(); j += 2)
        {
            choose[i].answer[temp[j]] = true;
        }
    }
    for(int i = 0; i < n; i++)
    {
        int score = 0, site = 1;
        bool error_flag = false;
        getline(cin, s);
        for(int j = 0; j < m; j++)
        {
            int num = s[site] - '0';
            string c;
            c = s.substr(site + 2, num * 2 - 1);
            // cout << c << " " << choose[j].answer << endl;
            // if(!c.compare(choose[j].answer))   score += choose[j].score;
            // else    error[j]++;
            for(int k = 0; k < c.size(); k += 2)
            {
                if(!choose[i].answer[c[k]])
                {
                    error_flag = true;
                    error[j][c[k] - 'a']++;
                    break;
                }
            }
            if(!error_flag)
            {
                if((c.size() + 1) / 2 == choose[i].answer.size())
                {
                    score += choose[i].score;
                }
                else
                {
                    score += (choose[i].score / 2);
                }
                
            }
            site += (num * 2 + 4);
        }
        printf("%d\n", score);
    }
}