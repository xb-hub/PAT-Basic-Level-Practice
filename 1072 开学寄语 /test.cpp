#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, bool> ban;
    int thing;
    for(int i = 0; i < m; i++)
    {
        cin >> thing;
        ban[thing] = true;
    }
    string name;
    int stu_m, stu_thing, count = 0, thing_count = 0;
    bool flag;
    for(int a = 0; a < n; a++)
    {
        flag = false;
        cin >> name >> stu_m;
        for(int b = 0; b < stu_m; b++)
        {
            cin >> stu_thing;
            if(ban[stu_thing])
            {
                if(!flag)
                {
                    cout << name << ":";
                    flag = true;
                }
                printf(" %.04d", stu_thing);
                thing_count++;
            }
        }
        if(flag)
        {
            count++;
            cout << endl;
        }
    }
    cout << count << " " << thing_count;
}