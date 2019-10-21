#include <iostream>
#include <algorithm>
using namespace std;

string res(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

void add(string &s1, string s2)
{
    int temp = 0;
    bool add_one = false;
    for(int i = s1.size() - 1; i >= 0; i--)
    {
        temp = s1[i] - '0' + s2[i] - '0';
        if(add_one) temp++;
        if(temp >= 10)
        {
            temp -= 10;
            add_one = true;
        }
        else
        {
            add_one = false;
        }
        s1[i] = temp + '0';
    }
    if(add_one) s1 = "1" + s1;
}

int main()
{
    string num, res_num;
    cin >> num;
    if(num == res(num))
    {
        cout << num <<" is a palindromic number." << endl;
        return 0;
    }
    int n = 10;
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        cout << num << " + " << res(num) << " = ";
        add(num, res(num));
        cout << num << endl;
        if(num == res(num))
        {
            flag = true;
            cout << num <<" is a palindromic number." << endl;
            break;
        }
    }
    if(!flag)   cout << "Not found in 10 iterations." << endl;
}