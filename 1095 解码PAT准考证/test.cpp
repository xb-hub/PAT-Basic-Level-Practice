#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

struct Student
{
    string id;
    int score;
};

bool cmp(Student a, Student b)
{
    return a.score == b.score ? a.id < b.id : a.score > b.score;
}

int main()
{
    int n, m; 
    scanf("%d%d", &n, &m);
    vector<Student> inf(n);
    for(int i = 0; i < n; i++)
    {
        cin >> inf[i].id >> inf[i].score;
    }
    int num;
    string k;
    for(int i = 1; i <= m; i++)
    {
        vector<Student> result;
        cin >> num >> k;
        printf("Case %d: %d %s\n", i, num, k.c_str());
        int sum = 0, count = 0;
        if (num == 1)
        {
            for(int j = 0; j < inf.size(); j++)
            {
                if(inf[j].id[0] == k[0])    result.push_back(inf[j]);
            }
        }

        else if(num == 2)
        {
            for(int j = 0; j < inf.size(); j++)
            {
                string c = inf[j].id.substr(1, 3);
                if(c == k)
                {
                    count++;
                    sum += inf[j].score;
                }
            }
            if (count != 0) printf("%d %d\n", count, sum);
        }
        else if(num == 3)
        {
            unordered_map<string, int> c3;
            for(int j = 0; j < inf.size(); j++)
            {
                string c = inf[j].id.substr(4, 6);
                if(c == k)
                {
                    c = inf[j].id.substr(1, 3);
                    c3[c]++;
                }
            }
            // Student temp;
            /**
             * unordered_map无序，存入速度比map快
             */
            for(auto it : c3)
            {
                // temp.id = it.first;
                // temp.score = it.second;
                result.push_back({it.first, it.second});
            }
        }
        // sort(result.begin(), result.end(), cmp);
        // for(int i = 0; i < result.size(); i++)
        // {
        //     printf("%s %d\n", result[i].id.c_str(), result[i].score); 
        // } 
        // if((result.size() == 0 && (num == 1 || num == 3)) || (count == 0 && num ==2))
        // {
        //     printf("NA\n");
        // }
        if((result.size() == 0 && (num == 1 || num == 3)) || (count == 0 && num ==2))
        {
            printf("NA\n");
            continue;
        }
        sort(result.begin(), result.end(), cmp);
        for(int i = 0; i < result.size(); i++)
        {
            printf("%s %d\n", result[i].id.c_str(), result[i].score); 
        }  
    }
}