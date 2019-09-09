#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Choose
{
    int score;
    int nums;
    string answer;
};


int main()
{
    Choose choose[101];
    int n, m;
    cin >> n >> m;
    getchar();
    string s, stu;
    vector<int> grade(m), num(m);
    for(int i = 0; i < m; i++)
    {
        getline(cin, s);
        // choose[i].score = stoi(s.substr(0, 1));
        // choose[i].nums = stoi(s.substr(4, 1));
        choose[i].score = s[0] - '0';
        choose[i].nums = s[4] - '0';
        choose[i].answer = s.substr(6, s.size() - 6);
    }
    // cout << choose[0].score << "  " << choose[0].nums << "  " << choose[0].answer << endl;
    int score = 0, k = 0, site = 1;
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        for(int j = 0; j < m; j++)
        {
            int num = s[site] - '0';
            if(num != choose[j].nums)
            {
                // cout << j << "  " << k << "  " << choose[0].nums << endl;
                // cout << "ERROR" << endl;
                if(j != m - 1)
                {
                    site += (num * 2 + 4);
                    continue;
                }
                else
                {
                    site = 1;
                    continue;
                }
                
            }
            string c;
            for(int l = 0; l < num; l++)
            {
                c = s.substr(site + 2, num * 2 - 1);
                cout << c << choose[j].answer << endl;
                if(!c.compare(choose[j].answer))   score += choose[i].score;
            }
        }
        site = 1;
        cout << score << endl;
    }
}