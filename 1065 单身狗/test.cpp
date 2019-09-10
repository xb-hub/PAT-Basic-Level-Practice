#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> mate(100000, -1);
    int id;
    for(int i = 0; i < n; i++)
    {
        cin >> id;
        cin >> mate[id];
    }
    // cout << mate["11111"] << " " << mate["33333"] << " " << mate["55555"] << endl;
    int m;
    cin >> m;
    vector<int> ss(m);
    vector<int> result(m);
    for(int i = 0; i < m; i++)
    {
        cin >> ss[i];
    }
    // for(int i = 0; i < m; i++)
    // {
    //     cout << ss[i] << " ";
    // }
    int count = 0;
    for(int i = 0; i < ss.size() - 1; i++)
    {
        bool flag = false;
        for(int j = 0; j < ss.size() - 1; j++)
        {
            if(ss[j] == mate[ss[i]])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            count++;
            result.push_back(ss[i]);
        }
    }
    cout << count << endl;
    for(int i = 0; i < result.size() - 2; i++)
    {
        cout << result[i] << " ";
    }
    cout << result[result.size() - 1];
}