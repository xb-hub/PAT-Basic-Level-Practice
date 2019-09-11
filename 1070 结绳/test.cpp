#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> len(n);
    for(int i = 0; i < n; i++)
    {
        cin >> len[i];
    }
    sort(len.begin(), len.end());
    int length = len[0];
    for(int i = 1; i < len.size(); i++)
    {
        length = (length + len[i]) / 2;
    }
    cout << length;
}