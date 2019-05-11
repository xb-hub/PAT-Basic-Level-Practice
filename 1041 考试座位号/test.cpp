#include <iostream>
#define MaxSize 1000
using namespace std;

struct exam {
    string examnum;
    int testnum;
    int sitenum;
} stu[MaxSize];

int main() {
    int n, m, searchnum[MaxSize];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> stu[i].examnum >> stu[i].testnum >> stu[i].sitenum;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> searchnum[i];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (searchnum[i] == stu[j].testnum) {
                cout << stu[j].examnum << " " << stu[j].sitenum << endl;
                break;
            }
}