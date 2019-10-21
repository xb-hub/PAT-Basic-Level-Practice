#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0, left, right;
    cin >> n;
    vector<int> v(n), a(n), result;
    int left_max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    a = v;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == a[i] && a[i] > left_max)
        {
            result.push_back(v[i]);
            count++;
        }
        left_max = max(a[i], left_max);
    }
    cout << result.size() << endl;
    if (result.size() == 0)
    {
        cout << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
    }    
}
