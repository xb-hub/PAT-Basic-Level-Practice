#include <iostream>
#include <string>
using namespace std;
int main() {
    string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                    "jly",  "aug", "sep", "oct", "nov", "dec"};
    string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes",
                    "hei",  "elo", "syy", "lok", "mer", "jou"};
    int n;
    string s;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) 
    {
        int result = 0;
        getline(cin, s);
        int len = s.length();
        if (s[0] >= '0' && s[0] <= '9') 
        {
            int num = atoi(s.c_str());
            int x = num / 13;
            int y = num % 13;
            // if(x)
            // {
            //     if(y)
            //     {
            //         cout << b[x] << " ";
            //         cout << a[y] << endl;
            //     }
            //     else    cout << b[x] << endl;
            // }
            // else
            // {
            //     cout << a[y] << endl;
            // }
            if(x)   cout << b[x];
            if(!y && num != 0)  cout << endl;
            if(x && y)  cout << " ";
            if(y || num == 0)   cout << a[y] << endl; 
        } 
        else 
        {
            
            string s1 = s.substr(0, 3), s2;
            if(len > 4) s2 = s.substr(4, 3);
            if(!s2.empty())
            {
                for(int i = 0; i < 13; i++)
                {
                    if(s1 == b[i])  result += i * 13;
                    if(s2 == a[i])   result += i;
                }
            }
            else
            {
                for(int i = 0; i < 13; i++)
                {
                    if(s1 == b[i])  result += i * 13;
                    if(s1 == a[i])  result += i;
                }
            }
            cout << result << endl;
        }
    }
}