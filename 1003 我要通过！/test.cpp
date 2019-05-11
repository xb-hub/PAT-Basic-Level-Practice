#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        int P_count = 0, P_pos;
        int T_count = 0, T_pos;
        int A_count = 0;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'P') {
                P_count++;
                P_pos = j;
            }
            if (s[j] == 'A') 
                A_count++;
            if (s[j] == 'T') {
                T_count++;
                T_pos = j;
            }
        }
        // cout << P_count << A_count << T_count;
        if (P_count + A_count + T_count == s.length() && T_pos - P_pos != 1 &&T_count == 1 
        && P_count == 1 && A_count != 0 &&P_pos * (T_pos - P_pos - 1) == s.length() - T_pos - 1) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
}