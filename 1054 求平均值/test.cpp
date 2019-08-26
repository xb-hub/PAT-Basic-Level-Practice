#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> num(n);
    double sum = 0.0;
    int count = 0, flag = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
        for(int j = 0; j < num[i].size(); j++)
        {
            if((num[i][j] > '9' || num[i][j] < '0') ||
                (num[i][j] == '.' && num[i].size() - j - 1 > 2))
            {
                printf("ERROR: %s is not a legal number\n", num[i]);
                flag = 1;
                break;
            }
        }
        if(flag == 1)   continue;
        double num_ = atof(num[i].c_str);
        if(num_ > 1000 || num_ < -1000)
        {
            printf("ERROR: %s is not a legal number\n", num[i]);
            continue;
        }
        count++;
        sum += num_;
    }
    cout << (double)sum / count << endl;
}