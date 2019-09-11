#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student
{
    string name;
    int height;
} stu[10001];

bool cmp(Student a, Student b)
{
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> stu[i].name >> stu[i].height;
    }
    sort(stu, stu + n, cmp);
    int num = n / k;
    int last_num = num + (n % k);
    vector<string> last(last_num);
    vector<string> line(num);
    int m = last_num / 2;
    for(int i = 0; i < last_num; i = i + 2)
    {
        last[m] = stu[i].name;
        m++;
    }
    m = last_num / 2 -1;
    for(int i = 1; i < last_num; i = i + 2)
    {
        last[m] = stu[i].name;
        m--;
    }
    cout << last[0];
    for(int i = 1; i < last.size(); i++)
    {
        cout << " " << last[i];
    }
    cout << endl;
    int t = 0;
    t += last_num;
    for(int i = 0; i < k - 1; i++)
    {
        m = num / 2;
        for(int j = t; j < t + num; j = j + 2)
        {
            line[m] =  stu[j].name;
            m++;
        }
        m = num / 2 - 1;
        for(int j = t + 1; j < t + num; j = j + 2)
        {
            line[m] = stu[j].name;
            m--;
        }
        cout << line[0];
        for(int i = 1; i < line.size(); i++)
        {
            cout << " " << line[i];
        }
        cout << endl;
        t += num;
    }
}