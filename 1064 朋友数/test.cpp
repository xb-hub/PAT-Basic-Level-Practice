#include <iostream>
#include <set>

using namespace std;

int compute(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, num;
    cin >> n;
    set<int> result;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        result.insert(compute(num));
    }
    cout << result.size() << endl;
    for(auto i = result.begin(); i != result.end(); i++)
    {
        if(i != result.begin()) cout << " ";
        cout << *i;
    }
}