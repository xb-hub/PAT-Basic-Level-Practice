#include <iostream>
using namespace std;

int main()
{
    int n;
    string d, result;
    cin >> d >> n;
    int count;
    for(int i = 0; i < n - 1; i++)
    {
        result = "";
        for(int j = 0; j < d.size(); j++)
        {
            count = 1;
            while (d[j] == d[j + 1] && j != d.size() - 1)
            {
                j++;
                count++;
            }
            string first(1, d[j]);
            result += first + to_string(count);
        }
        d = result;
    }
    cout << d << endl;
}