#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < 4 * n; i++){
        cin >> s;
        if(s[2] == 'T'){
            cout << s[0] - 'A' + 1;
        }
    }
}