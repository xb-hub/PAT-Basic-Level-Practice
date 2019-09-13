#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string s;
    bool exist_num = false, exist_alpha = false, exist_luan = false;
    for(int i = 0; i < n; i++)
    {
        exist_num = false;  exist_alpha = false;    exist_luan = false;
        getline(cin, s);
        if(s.size() < 6)
        {
            cout << "Your password is tai duan le." << endl;
            continue;
        }
        for(int j = 0; j < s.size(); j++)
        {
            if(isalpha(s[j]))   exist_alpha = true;
            else if(isdigit(s[j]))   exist_num = true;
            else
            {
                if(s[j] != '.') exist_luan = true;
            }
        }
        if(exist_luan)  cout << "Your password is tai luan le." << endl;
        else
        {
            if(exist_alpha && exist_num)    cout << "Your password is wan mei." << endl;
            if(exist_num && !exist_alpha)   cout << "Your password needs zi mu." << endl;
            if(exist_alpha && !exist_num)   cout << "Your password needs shu zi." << endl;
        }
        
    }
}