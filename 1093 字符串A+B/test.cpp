#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    int hash[200] = {0};
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.size(); i++) {
        if (hash[s1[i]] == 0) {
            cout << s1[i];
            hash[s1[i]]++;
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        if (hash[s2[i]] == 0) {
            cout << s2[i];
            hash[s2[i]]++;
        }
    }
}