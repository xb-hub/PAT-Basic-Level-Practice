#include <iostream>
using namespace std;

void comp(int a, double b)
{
    if(a > b)   cout << " Gai";
    if(a == b)  cout << " Ping";
    if(a < b)   cout << " Cong";
}

int main()
{
    int m, x, y;
    cin >> m >> x >> y;
    int jia = 34, yi;
    double bin;
    bool flag = false;
    for(jia = 99; jia >= 10; jia--)
    {
        yi = jia % 10 * 10 + jia / 10;
        bin = (double)abs(jia - yi) / x;
        if(yi != bin * y) continue;
        else
        {
            cout << jia;
            comp(m, jia);
            comp(m, yi);
            comp(m, bin);
            flag = true;
            break;
        }
    }
    if(!flag)   cout << "No Solution" << endl;
}