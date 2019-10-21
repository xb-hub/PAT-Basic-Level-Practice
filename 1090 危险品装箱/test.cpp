#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> mutex;
    int thing1, thing2;
    for(int i = 0; i < n; i++)
    {
        cin >> thing1 >> thing2;
        mutex[thing1].push_back(thing2);
        mutex[thing2].push_back(thing1);
    }
    int k;
    vector<int> thing;
    bool flag = false;
    for(int i = 0; i < m; i++)
    {
        cin >> k;
        flag = false;
        vector<int> thing(k);
        map<int, bool> exist;
        for(int j = 0; j < k; j++)
        {
            cin >> thing[j];
            exist[thing[j]] = true;
        }
        for (int i = 0; i < thing.size(); i++)
        {
            for(int j = 0; j < mutex[thing[i]].size(); j++)
            {
                if(exist[mutex[thing[i]][j]])
                {
                    cout << "No" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag)    break;
        }
        if(!flag)   cout << "Yes" << endl;
    }
}