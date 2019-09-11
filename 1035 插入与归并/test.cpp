#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int index = 0;
    while (b[index] <= b[index + 1] && index < n - 1)
    {
        index++;
    }
    int i  = index + 1;
    while (a[i] == b[i] && i < n)
    {
        i++;
    }
    if(i == n)
    {
        cout << "Insertion Sort" << endl;
        sort(a.begin(), a.begin() + index + 2);
    }
    else
    {
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while (flag)
        {
            flag = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i] != b[i])
                    flag = 1;
            }
            k *= 2;
            for(int i = 0; i < n / k; i++)
            {
                sort(a.begin() + i * k, a.begin() + (i + 1) * k);
            }
            sort(a.begin() +(n - n % k), a.begin() + n);
        }
    }
    for(int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n - 1];
}