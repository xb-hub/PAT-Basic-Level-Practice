#include <iostream>
#include <string.h>
using namespace std;

const int maxn = 100010;
int main() {
    int school[maxn];
    memset(school, 0, sizeof(school));
    int n, schoolID, score, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> schoolID >> score;
        school[schoolID - 1] += score;
        if (school[schoolID - 1] > school[max])
            max = schoolID - 1;
    }
    cout << max + 1 << " " << school[max];
    return 0;
}