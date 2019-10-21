#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long m;
    cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int front = 0, behind = 0, max_size = 0;
    while (behind < n)
    {
        if(nums[front] * m >= nums[behind])
        {
            max_size++;
            behind++;
        }
        else
        {
            front++;
            behind++;
        }   
    }
    cout << max_size;
}