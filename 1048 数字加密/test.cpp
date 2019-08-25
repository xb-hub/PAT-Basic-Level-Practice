#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char m[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int size = s1.size() - s2.size();
    if(size > 0)    s2.append(size, '0');
    else    s1.append(-size, '0');
    string c;
    for(int i = 0; i < s1.size(); i++)
    {
        if(i & 1)
        {
            int temp = s2[i] - s1[i];
            if(temp < 0)    temp +=10;
            c += m[temp];
        }
        else
        {
            int temp = (s2[i] - '0') + (s1[i] - '0');
            temp %= 13;
            c += m[temp];
        }
    }
    for(int i = c.size() - 1; i >= 0; i--)
    {
        cout << c[i];
    }
}
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int size = s1.size() - s2.size();
//     if(size > 0)
//     {
//         for(int i = 0; i < size; i++)
//         {
//             int temp = -(s1[i] - '0');
//             if(temp == 0)   cout << "0";
//             else    cout << 10 + temp;
//         }
//         s1 = s1.substr(size, s1.size() - size);
//     }
//     else if(size < 0)
//     {
//         for(int i = 0; i < -size; i++)
//             cout << s2[i];
//         s2 = s2.substr(-size, s2.size() + size);
//     }
//     for(int i = 0; i < s1.size(); i++)
//     {
//         if(s1.size() & 1)
//         {
//             if(i & 1)
//             {
//                 int temp = s2[i] - s1[i];
//                 if(temp < 0)    temp +=10;
//                 cout << temp;
//             }
//             else
//             {
//                 int temp = (s2[i] - '0') + (s1[i] - '0');
//                 temp %= 13;
//                 cout << m[temp];
//             }
            
//         }
//         else
//         {
//             if(i & 1)
//             {
//                 int temp = (s2[i] - '0') + (s1[i] - '0');
//                 temp %= 13;
//                 cout << m[temp];
//             }
//             else
//             {
//                 int temp = s2[i] - s1[i];
//                 if(temp < 0)    temp +=10;
//                 cout << temp;
//             }
//         }      
//     }
// }