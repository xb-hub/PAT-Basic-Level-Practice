#include <iostream>
using namespace std;

int main()
{
    char method;
    string s;
    cin >> method;
    getchar();
    getline(cin ,s);
    int count = 1;
    string num;
    switch (method)
    {
    case 'C':
        for(int i = 0; i < s.size(); i++)
        {
            count = 1;
            while(s[i] == s[i + 1])
            {
                i++;
                count++;
            }
            if(count == 1)
            {
                cout << s[i];
            }
            else
            {
                cout << count << s[i];
            } 
        }
        break;
    
    case 'D':
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                num += s[i];
                continue;
            }
            if (num.length() > 0)   count = stoi(num);
            for(int j = 0; j < count; j++)
            {
                cout << s[i];
            }
            num = "";
            count = 1;
        }
        break;

    // default:
    //     break;
    }
}