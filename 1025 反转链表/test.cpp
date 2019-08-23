#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int first_address, n, k, address;
    int data[100001], next[100001];
    int list[100001];
    cin >> first_address >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> address;
        cin >> data[address] >> next[address];
    }
    int count = 0;
    while (first_address != -1)
    {
        list[count++] = first_address;
        first_address = next[first_address];
    }
    
    // for(int i = 0; i < (k / 2); i++)
    // {
    //     reverse(begin(list) + i, begin(list) + k - i);
    // }
    for (int i = 0; i < (count - count % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for(int i = 0; i < count - 1; i++)
    {
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    }
    printf("%05d %d %s\n", list[count - 1], data[list[count - 1]], "-1");
}