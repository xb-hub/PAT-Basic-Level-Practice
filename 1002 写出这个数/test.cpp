#include <iostream>
using namespace std;

void pinyin(int a) {
    switch (a) {
    case 0: cout << "ling"; break;
    case 1: cout << "yi";   break;
    case 2: cout << "er";   break;
    case 3: cout << "san";  break;
    case 4: cout << "si";   break;
    case 5: cout << "wu";   break;
    case 6: cout << "liu";  break;
    case 7: cout << "qi";   break;
    case 8: cout << "ba";   break;
    case 9: cout << "jiu";  break;
    }
}
int main() {
    char a[101];
    cin >> a;
    int sum = 0, i = 0;
    while (a[i] != '\0') {
        sum += a[i] - '0';
        ++i;
    }
    int b[11], j = 0;
    if (sum == 0) {
        pinyin(0);
        return 0;
    }
    while (sum != 0) {
        b[j] = sum % 10;
        sum /= 10;
        ++j;
    }
    for (j -= 1; j > 0; --j) {
        pinyin(b[j]);
        cout << " ";
    }
    pinyin(b[0]);
    return 0;
}