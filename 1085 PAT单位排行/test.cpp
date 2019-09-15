#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string id;
    double score;
    string school;
} stu[100001];

struct Rank
{
    string school;
    int sum;
    int num;
};


bool cmp(Student s1, Student s2)
{
    return s1.school < s2.school;
}

bool res_cmp(Rank a, Rank b)
{
    if (a.sum != b.sum)
        return a.sum > b.sum;
    else if (a.num != b.num)
        return a.num < b.num;
    else
        return a.school < b.school;
}

int main()
{
    int n, count, kind = 0, grade = 1, temp = 1;
    double sum;
    cin >> n;
    // map<int, Rank> result;
    vector<Rank> result;
    Rank rank;
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
        result.push_back({stu[i].school, sum, count + 1});
        kind++;
    }
    sort(result.begin(), result.end(), res_cmp);
    cout << kind << endl;
    for(int i = 0; i < result.size(); i++)
    {
        cout << temp << " " << result[i].school << " " << result[i].sum << " " << result[i].num << endl;
        grade++;
        if(result[i].sum != result[i + 1].sum)    temp = grade;
    }
}