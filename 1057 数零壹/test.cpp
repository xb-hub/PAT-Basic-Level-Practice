#include <iostream>
using namespace std;
int main() {
    string s;
    int sum = 0, hash[2] = {0};
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') sum += (s[i] - 'a' + 1);
        if (s[i] >= 'A' && s[i] <= 'Z') sum += (s[i] - 'A' + 1);
    };
    while (sum) {
        hash[sum % 2]++;
        sum /= 2;
    }
    cout << hash[0] << " " << hash[1];
}