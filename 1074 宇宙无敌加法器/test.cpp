#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void handle_s(string &s)
{
    int index = 0, size = s.size();
    if(s[0] == '0')
    {
        for(int i = 1; i < size; i++)
        {
            if(s[i] == '0') continue;
            index = i;
            break;
        }
        if(index == 0)    s = "0";
        else    s = s.substr(index, size - index);
    }
}

int main()
{
    string s, num_1, num_2;
    cin >> s >> num_1 >> num_2;
    handle_s(num_1);
    handle_s(num_2);
    if(num_2.size() > num_1.size())
    {
        num_2.swap(num_1);
    }

    reverse(num_1.begin(), num_1.end());
    reverse(num_2.begin(), num_2.end());
    reverse(s.begin(), s.end());

    int a = num_1.size() - num_2.size();
    num_2.append(a, '0');
    // cout << s << endl << num_1 << endl << num_2 << endl;
    int carry = 0, temp = 0, site = 0;
    vector<int> result;
    for(int i = 0; i < num_1.size(); i++)
    {
        site = s[i] - '0';
        if(site == 0)   site = 10;
        temp = num_1[i] - '0' + num_2[i] - '0' + carry;
        carry = 0;
        if(temp >= site)
        {
            carry = temp / site;
            temp = temp % site;
        }
        result.push_back(temp);
    }
    if(carry != 0)  result.push_back(carry);
    for(int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}