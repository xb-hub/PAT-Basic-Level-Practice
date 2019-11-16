#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<string> word;
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            word.push_back(s.substr(index, i - index));
            index = i + 1;
        }
    }
    word.push_back(s.substr(index, s.size() - index));
    bool flag = false;
    for (vector<string>::reverse_iterator it = word.rbegin(); it != word.rend(); it++)
    {
        if (flag)
            cout << " ";
        cout << *it;
        flag = true;
    }
}
