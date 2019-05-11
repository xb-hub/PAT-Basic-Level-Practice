#include<iostream>
#include <vector>
#define MaxSize 100000
using namespace std;

int main()
{
    int n, a[MaxSize], num = 0, left, right;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        left = 0, right = n - 1;
        int temp = a[i];
        // cout << temp << endl;
        while (a[right] > temp && left < right)
            right--;
        // cout << right << " ";
        while (a[left] < temp && left < right)
            left++;
        // cout << left << " " << temp << endl;;
        if (right == left)
            v.push_back(temp);
    }
    cout << v.size() << endl;
    for (vector<int>::iterator iter=v.begin();iter!=v.end()-1;iter++)
    {
        cout << *iter << " ";
    }
    cout << v.back();
    return 0;
}
