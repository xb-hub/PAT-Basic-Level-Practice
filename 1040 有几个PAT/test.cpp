#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count_p = 0, count_a = 0, count_t = 0, sum = 0;
    count_t = count(s.begin(), s.end(), 'T');

    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == 'P') count_p++;
        if(s[i] == 'T') count_t--;
        if(s[i] == 'A') sum = (sum + count_p * count_t % 1000000007) % 1000000007;
    }
    cout << sum;
}

// int main()
// {
//     string s;
//     cin >> s;
//     string::iterator first_p = s.begin(), last_p = s.end(), first_t = s.begin(), last_t = s.end();
//     bool first_find = false, last_find = false;
//     for(string::iterator it = s.begin(); it != s.end(); it++)
//     {
//         if(*it == 'P' && !first_find)
//         {
//             first_p = it;
//             first_find = true;
//         }
//         if(first_find && *it == 'T')
//         {
//             first_t = --it;
//             break;
//         }
//     }
//     for(string::iterator it = --s.end(); it != s.begin(); it--)
//     {
//         if(*it == 'T'&& !last_find)
//         {
//             last_t = it;
//             last_find = true;
//         }
//         if(last_find && *it == 'P')
//         {
//             last_p == ++it;
//             break;
//         }
//     }
//     int sum = 0;
//     for(string::iterator it_p = first_p; it_p != last_p; it_p++)
//     {
//         if(*it_p != 'P')    continue;
//         for(string::iterator it_t = last_t; it_t != first_t; it_t--)
//         {
//             if(*it_t == 'T')
//             {
//                 sum += count(it_p, it_t, 'A');
//             }
//         }
//     }
//     cout << sum % 1000000007;
// }