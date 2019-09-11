#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int m, n, s;
    cin >> m >> n >> s;
    if(s > m)
    {
        cout << "Keep going..." << endl;
    }
    string str;
    vector<string> user(m);
    map<string, int> exist;
    for(int i = 0; i < m; i++)
    {
        cin >> str;
        user[i] = str;
    }
    for(int i = s - 1; i < m; i += n)
    {
        while (exist[user[i]] != 0)
        {
            i++;
        }
        cout << user[i] << endl;
        exist[user[i]]++;
    }
}