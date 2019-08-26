#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<string>> face;
    string s;
    for(int i = 0; i < 3; i++)
    {
        vector<string> base_face;
        getline(cin, s);
        int j = 0, k = 0;
        while(j < s.size())
        {
            if(s[j] == '[')
            {
                k = j;
                while(k++ < s.size())
                {
                    if(s[k] == ']')
                    {
                        base_face.push_back(s.substr(j + 1, k - j - 1));
                        j = k;
                        break;
                    }
                }
            }
            j++;
        }
        face.push_back(base_face);
    }
    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < face[i].size(); j++)
    //     {
    //         cout << face[i][j];
    //     }
    //     cout << endl;
    // }
    int n;
    int a, b, c, d, e;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e;
        if(a > face[0].size() || b > face[1].size() || c > face[2].size() || d > face[1].size() || e > face[0].size() 
            || a < 1 || b < 1 || c < 1 || d < 1 || e < 1)
        {
            //字符串内有'\'需要输入'\\'
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << face[0][a-1] << "(" << face[1][b-1] << face[2][c-1] << face[1][d-1]<< ")" << face[0][e-1] << endl;
    }
}