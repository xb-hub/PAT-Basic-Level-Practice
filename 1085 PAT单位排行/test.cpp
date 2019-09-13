#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

struct Student
{
    string id;
    double score;
    string school;
} stu[100001];

struct Res
{
    string school;
    int num;
};


bool cmp(Student s1, Student s2)
{
    return s1.school < s2.school;
}

int main()
{
    int n, count, kind = 0, i = 1;
    double sum;
    cin >> n;
    map<int, Res> result;
    Res res;
    for(int i = 0; i < n; i++)
    {
        cin >> stu[i].id >> stu[i].score >> stu[i].school;
        transform(stu[i].school.begin(), stu[i].school.end(), stu[i].school.begin(), ::tolower);
        if(stu[i].id[0] == 'B')
        {
            stu[i].score /= 1.5;
        }
        else if(stu[i].id[0] == 'T')
        {
            stu[i].score *= 1.5;
        }
    }
    sort(stu, stu + n, cmp);
    // for(int i = 0; i < n; i++)
    // {
    //     cout << stu[i].id << " " << stu[i].score << " " << stu[i].school << endl;
    // }
    for(int i = 0; i < n; i++)
    {
        sum = 0;    count = 0;
        while (stu[i].school == stu[i + 1].school)
        {
            sum += stu[i].score;
            count++;
            i++;
        }
        sum += stu[i].score;
        res.num = count + 1;
        res.school = stu[i].school;
        result[sum] = res;
        kind++;
    }
    cout << kind << endl;
    for(map<int, Res>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << i << " " << it->second.school << " " << " " << it->first << " " << it->second.num << endl;
    }
}