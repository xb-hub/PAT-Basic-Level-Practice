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
    bool point;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
        point = false;
        flag = 0;
        if(num[i][0] == '-' || num[i][0] == '+')
        {
            if((num[i][1] > '9' || num[i][1] < '0'))
            {
                cout << "ERROR: " << num[i] << " is not a legal number" << endl;
                continue;
            }
        }
        else
        {
            if((num[i][0] > '9' || num[i][0] < '0'))
            {
                cout << "ERROR: " << num[i] << " is not a legal number" << endl;
                continue;
            }
        }
        for(int j = 1; j < num[i].size(); j++)
        {   
            if(num[i][j] == '.')
            {
                if(!point)
                {
                    if(num[i][j] == '.' && num[i].size() - j - 1 > 2)
                    {
                        cout << "ERROR: " << num[i] << " is not a legal number" << endl;
                        flag = 1;
                        point = true;
                        break;
                    }
                }
                else
                {
                    cout << "ERROR: " << num[i] << " is not a legal number" << endl;
                    flag = 1;
                    break;
                }
                
            }
            else
            {
                if((num[i][j] > '9' || num[i][j] < '0'))
                {
                    cout << "ERROR: " << num[i] << " is not a legal number" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)   continue;
        double num_ = stod(num[i]);
        if(num_ > 1000 || num_ < -1000)
        {
            cout << "ERROR: " << num[i] << " is not a legal number" << endl;
            continue;
        }
        count++;
        sum += num_;
    }
    if(count == 1)
        printf("The average of 1 number is %.2f", sum);
    else if(count > 1)
        printf("The average of %d numbers is %.2f", count, sum / count);
    else
        printf("The average of 0 numbers is Undefined");
}