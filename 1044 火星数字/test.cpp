#include <iostream>
#include <string>
using namespace std;
int main() {
    string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
                    "jly",  "aug", "sep", "oct", "nov", "dec"};
    string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes",
                    "hei",  "elo", "syy", "lok", "mer", "jou"};
    int n;
    string s;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        int len = s.length();
        if (s[0] >= '0' && s[0] <= '9') {
            int num = atoi(s.c_str());
            int x = num / 13;
            if (x) cout << b[x] << " ";
            int y = num % 13;
            if (y || num == 0) cout << a[y] << endl;
        } else if (s[0] >= 'a' && s[0] <= 'z') {
            int res = 0;
            string s1 = s.substr(0, 3), s2;
            if (len > 4) {
                s2 = s.substr(4, 3);
                for (int i = 0; i < 13; i++) {
                    if (s1 == b[i]) res += (i * 13);
                    if (s2 == a[i]) res += i;
                }
                cout << res << endl;
            } else
                for (int i = 0; i < 13; i++) {
                    if (s1 == a[i]) {
                        cout << i << endl;
                        break;
                    }
                    if (s1 == b[i]) {
                        cout << i * 13 << endl;
                        break;
                    }
                }
        }
    }
}