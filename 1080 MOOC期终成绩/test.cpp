#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

struct Grade
{
    int online;
    int mid;
    int final;
};

struct Rank
{
    string id;
    int online;
    int mid;
    int final;
    int g;
};

bool cmp(Rank a, Rank b)
{
    return a.g == b.g ? a.id < b.id : a.g > b.g;
}

int main()
{
    int p, m, n;
    cin >> p >> m >> n;
    getchar();
    string s, id;
    int index, score;
    map<string, Grade> result;
    vector<Rank> rank;
    map<string, bool> mid_exist;
    for(int i = 0; i < p; i++)
    {
        cin >> id >> score;
        result[id].online = score;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> id >> score;
        result[id].mid = score;
        mid_exist[id] = true;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> id >> score;
        result[id].final = score;
    }
    for(map<string, Grade>::iterator it = result.begin(); it != result.end(); it++)
    {
        // cout << it->first << " " << it->second.online << " " << it->second.mid << " " << it->second.final << endl;
        if(it->second.online < 200) continue;
        int g = 0;
        if(it->second.mid > it->second.final)
        {
            g = round(it->second.mid * 0.4 + it->second.final * 0.6);
        }
        else
        {
            g = it->second.final;
        }
        if(g >= 60)
        {
            rank.push_back({it->first, it->second.online, it->second.mid, it->second.final, g});
        }  
    }
    sort(rank.begin(), rank.end(), cmp);
    for(int i = 0; i < rank.size(); i++)
    {
        cout << rank[i].id << " " << rank[i].online << " ";
        if(mid_exist[rank[i].id])   cout << rank[i].mid << " ";
        else    cout << "-1 ";
        cout << rank[i].final << " " << rank[i].g << endl;
    }
}