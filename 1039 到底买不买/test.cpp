#include <iostream>
#include <map>
using namespace std;

int main() {
    int num = 0;
    string buy, want;
    cin >> buy >> want;
    map<char, int> m;
    for (int i = 0; i < buy.length(); i++)
        m[buy[i]]++;
    for (int i = 0; i < want.length(); i++) {
        if (m[want[i]] > 0)
            m[want[i]]--;
        else
            num++;
    }
    if (num)
        cout << "No" << " " << num;
    else
        cout << "Yes" << " " << buy.length() - want.length();
}