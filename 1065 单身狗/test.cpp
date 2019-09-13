#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mate;
    int id_m, id_f;
    for(int i = 0; i < n; i++)
    {
        cin >> id_m >> id_f;
        mate[id_m] = id_f;
        mate[id_f] = id_m;
    }
    int m;
    cin >> m;
    vector<bool> exist(100001, false);
    vector<int> ss(m);
    set<int> result;
    for(int i = 0; i < m; i++)
    {
        cin >> ss[i];
        exist[ss[i]] = true;
    }
    for(int i = 0; i < m; i++)
    {
        if(!exist[mate[ss[i]]])
        {
            result.insert(ss[i]);
        }
    }
    printf("%d\n", result.size());
    for(set<int>::iterator it = result.begin(); it != result.end(); it++)
    {
        if (it != result.begin()) printf(" ");
        printf("%05d", *it);
    }
}