#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string name , birth, max_name, min_name, max_year = "1814/09/06", min_year = "2014/09/06";
    for(int i = 0; i < n; i++)
    {
        cin >> name >> birth;
        if(birth <= "2014/09/06" && birth >= "1814/09/06")
        {
            count++;
            if(birth > max_year)
            {
                max_year = birth;
                max_name = name;
            }
            if(birth < min_year)
            {
                min_year = birth;
                min_name = name;
            }
        }
    }
    cout << count;
    if(count)    cout << " " << min_name << " " << max_name;
}