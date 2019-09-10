#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, distance[100001];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> distance[i];
    }
    sort(distance, distance + n, cmp);
    for(int i = 1; i <= n; i++)
    {
        if(i >= distance[i - 1])
        {
            cout << i - 1;
            return 0;
        }
    }
    cout << n;
}