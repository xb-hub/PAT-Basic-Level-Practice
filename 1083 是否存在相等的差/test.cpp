#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    // map<int, int, greater<int>> num;
    map<int, int> num;
    int a;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        num[abs(a - i)]++;
    }
    // for(map<int, int>::iterator it = num.begin(); it != num.end(); it++)
    // {
    //     if(it->second > 1)  cout << it->first << " " << it->second << endl;
    // }
    for(map<int, int>::iterator it = --num.end(); it != num.begin(); it--)
    {
        if(it->second > 1)  cout << it->first << " " << it->second << endl;
    }
    if(num.begin()->second > 1)
    {
        cout << num.begin()->first << " " << num.begin()->second << endl;
    }
}