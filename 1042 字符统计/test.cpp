#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int max = -1, sign = 0;
    int hash[127] = {0};
    for (int i = 0; i < s.size(); i++) hash[s[i]]++;
    for (int i = 97; i <= 122; i++) {
        hash[i] += hash[i - 32];
    }
    for (int i = 97; i <= 122; i++) {
        if (hash[i] > max) {
            max = hash[i];
            sign = i;
        }
    }
    printf("%c %d", sign, max);
}