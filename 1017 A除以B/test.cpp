#include <iostream>

using namespace std;

int main() {
    int a, q, r;
    string s;
    cin >> s >> a;
    q = (s[0] - '0') / a;
    if(q != 0 || s.length() == 1)
        cout << q;
    r = (s[0] - '0') % a;
    for (int i = 1; i < s.length(); i++) {
        q = (r * 10 + s[i] - '0') / a;
        cout << q;
        r = (r * 10 + s[i] - '0') % a;
    }
    cout << " " << r;
}