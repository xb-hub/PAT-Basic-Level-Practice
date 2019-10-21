#include <iostream>
#define MaxSize 1001
using namespace std;

int main() {
    int n, soc[MaxSize] = {0};
    cin >> n;
    int team, member, score;
    for (int i = 0; i < n; i++) {
        scanf("%d-%d %d", &team, &member, &score);
        soc[team] += score;
    }
    int Max = soc[1];
    for (int i = 2; i < 1001; i++) {
        if (soc[i] > Max) {
            Max = soc[i];
            team = i;
        }
    }
    cout << team << " " << Max;
}