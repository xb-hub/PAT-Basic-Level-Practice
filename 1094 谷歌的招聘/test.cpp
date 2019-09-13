#include <iostream>
#include <cmath>
using namespace std;

bool is_su(int a)
{
    if(a == 0 || a == 1)  return false;
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int l, k;
    string s, s_sub;
    cin >> l >> k;
    cin >> s;
    for(int i = 0; i <= s.size() - k; i++)
    {
        s_sub = s.substr(i, k);
        if(is_su(stoi(s_sub)))
        {
            cout << s_sub << endl;
            return 0;
        }
    }
    cout << "404" << endl;
}