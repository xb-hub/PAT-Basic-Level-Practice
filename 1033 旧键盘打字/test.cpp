#include <iostream>

using namespace std;

int main()
{
    string bad_key, text;
    getline(cin, bad_key);
    getline(cin ,text);
    if(bad_key.find('+') != -1)
    {
        for(int i = 0; i < text.size(); i++)
        {
            if(bad_key.find(toupper(text[i])) != -1 || isupper(text[i]))
            {
                continue;
            }
            else
            {
                cout << text[i];
            }
        }
    }
    else
    {
        for(int i = 0; i < text.size(); i++)
        {
            if(bad_key.find(toupper(text[i])) != -1)
            {
                continue;
            }
            else
            {
                cout << text[i];
            }
            
        }
    }
}