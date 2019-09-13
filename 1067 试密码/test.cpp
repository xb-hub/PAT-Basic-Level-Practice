#include <iostream>
using namespace std;

int main()
{
    string password;
    int n;
    cin >> password >> n;
    string pswd;
    int count = 0;
    getchar();
    while(true)
    {
        getline(cin, pswd);
        if(pswd == "#")
        {
            break;
        }
        if(pswd == password)
        {
            cout << "Welcome in";
            break;
        }
        else
        {
            cout << "Wrong password: " << pswd << endl;
            count++;
            if(count == n)
            {
                cout << "Account locked";
                break;
            }
        }
    }
}