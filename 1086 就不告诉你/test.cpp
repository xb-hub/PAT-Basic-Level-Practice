#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int res = a * b;
    vector<int> result;
    bool flag = false;
    while(res)
    {
        if((res % 10))
        {
            if(!flag)   flag = true;
        }
        if(flag)    cout << res % 10;
        res /= 10;
    }
}