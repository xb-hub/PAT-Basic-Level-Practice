#include <iostream>
#include <math.h>
#include <map>
using namespace std;

bool prime(int num)
{
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    map<string, int> stu;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        stu[s] = i + 1;
    }
    int k;
    cin >> k;
    int grade = 0;
    for(int i = 0; i < k; i++)
    {
        cin >> s;
        cout << s << ": ";
        if(stu.count(s) == 0)
        {
            cout << "Are you kidding?" << endl;
            continue;
        }
        if(stu[s] == -1)
        {
            cout << "Checked" << endl;
            continue;
        }
        grade = stu[s];
        // cout << grade << prime(grade) <<endl;
        if(grade == 1)  cout << "Mystery Award" << endl;
        else if(prime(grade))    cout << "Minion" << endl;
        else    cout << "Chocolate" << endl;
        stu[s] = -1;
    }
}