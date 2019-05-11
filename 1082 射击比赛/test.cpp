#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    int flag = 0, mindis, maxdis;
    string ID, minID, maxID;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ID >> x >> y;
        int dis = x * x + y * y;
        if (flag == 0) {
            mindis = dis;
            maxdis = dis;
            minID = ID;
            maxID = ID;
            flag++;
            continue;
        }
        if (dis < mindis) {
            mindis = dis;
            minID = ID;
        }
        if (dis > maxdis) {
            maxdis = dis;
            maxID = ID;
        }
    }
    cout << minID << " " << maxID;
}