#include <iostream>
#include <map>
using namespace std;

struct Grade
{
    int online;
    int mid;
    int final;
};

int split(string s)
{
    int i = 0;
    while (s[i] != ' ')
    {
        i++;
    }
    return i;
}


int main()
{
    int p, m, n;
    cin >> p >> m >> n;
    getchar();
    string s, id, score;
    int index;
    map<string, Grade> result;
    Grade grade;
    for(int i = 0; i < p; i++)
    {
        getline(cin, s);
        index = split(s);
        id = s.substr(0, index);
        grade.online = stoi(s.substr(index + 1, s.size() - i));
        result[id] = grade;
    }
    for(int i = 0; i < m; i++)
    {
        getline(cin, s);
        index = split(s);
        id = s.substr(0, index);
        result[id].mid = stoi(s.substr(index + 1, s.size() - i));
    }
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        index = split(s);
        id = s.substr(0, index);
        result[id].final = stoi(s.substr(index + 1, s.size() - i));
    }
}