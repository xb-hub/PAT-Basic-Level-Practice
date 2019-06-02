#include <cmath>
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (s[0] == '-') cout << "-";
    int pos = s.find('E');
    string s1 = s.substr(1, pos - 1);
    string s2 = s.substr(pos + 1, s.length() - pos - 1);
    int d2 = atoi(s2.c_str());
    if (d2 < 0) {
        cout << "0.";
        for (int i = 1; i < fabs(d2); i++) cout << "0";
        for (int i = 0; i < s1.length(); i++)
            if (s1[i] != '.') cout << s1[i];
    }
    else if (d2 > 0) {
        if (d2 < s1.length()) {
            for (int i = 0; i < s1.length(); i++) {
                if (s1[i] != '.') cout << s1[i];
                if ((i - 1) == d2 && i != (s1.length()-1)) cout << ".";
            }

        } else {
            for (int i = 0; i < s1.length(); i++)
                if (s1[i] != '.') cout << s1[i];
            for (int i = 0; i <= (d2 - s1.length() + 1); i++) cout << "0";
        }
    }
    else {
        cout << s1;
    }
}