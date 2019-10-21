#include <iostream>
using namespace std;

struct student {
    char name[11];
    char num[11];
    int garde;
};

int main() {
    int n, i, a = 0, m;
    cin >> n;
    struct student *p = (struct student *)malloc(n * sizeof(struct student));
    for (i = 0; i < n; i++)
        cin >> p[i].name >> p[i].num >> p[i].garde;
    m = p[0].garde;
    for (i = 1; i < n; i++)
        if (m < p[i].garde) {
            m = p[i].garde;
            a = i;
        }
    cout << p[a].name << " " << p[a].num << endl;
    a = 0;
    for (i = 1; i < n; i++)
        if (p[0].garde > p[i].garde) {
            p[0].garde = p[i].garde;
            a = i;
        }
    cout << p[a].name << " " << p[a].num << endl;
    return 0;
}