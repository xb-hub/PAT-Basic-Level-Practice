#include <iostream>
#include <vector>

using namespace std;

int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
// int m[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};

bool compute(string s)
{
    int sum = 0;
    for (int j = 0; j < 17; j++)
    {
        if (s[j] > '9' || s[j] < '0')
        {
            return false;
        }
        sum += (s[j] - '0') * weight[j];
    }
    if (m[sum % 11] - s[17] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, count = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (!compute(s))
        {
            cout << s << endl;
            count = 1;
        }
    }
    if (count == 0)
    {
        cout << "All passed" << endl;
    }
}