#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> m;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
        case 'P':   m['P']++;   break;
        case 'A':   m['A']++;   break;
        case 'T':   m['T']++;   break;
        case 'e':   m['e']++;   break;
        case 's':   m['s']++;   break;
        case 't':   m['t']++;   break;
        default:    break;
        }
    }
    while (m['P'] > 0 || m['A'] > 0 || m['T'] > 0 || m['e'] > 0 || m['s'] > 0 || m['t'] > 0) {
        if (m['P']-- > 0)
            cout << 'P';
        if (m['A']-- > 0)
            cout << 'A';
        if (m['T']-- > 0)
            cout << 'T';
        if (m['e']-- > 0)
            cout << 'e';
        if (m['s']-- > 0)
            cout << 's';
        if (m['t']-- > 0)
            cout << 't';
    }
}