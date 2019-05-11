#include <iostream>
using namespace std;

char Max(int a[]) {
    if (a[1] > a[0]) {
        if (a[2] > a[1])
            return 'B';
        else if (a[2] < a[1])
            return 'J';
        else 
            return 'B';
    }
    else if (a[1] < a[0]) {
        if (a[2] > a[0])
            return 'B';
        else if (a[2] < a[0])
            return 'C'; 
        else
            return 'C';
    }
    else {
        if (a[2] > a[1])
            return 'B';
        else if (a[2] < a[1])
            return 'C';
        else 
            return 'B';
    }
}

int main() {
    int n, jwin = 0, ywin = 0;
    int jiawin[3] = {0}, yiwin[3] = {0};
    char j, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> j >> y;
        if (j == 'C' && y == 'J') {
            jwin++;
            jiawin[0]++;
        }
        else if (j == 'C' && y == 'B') {
            ywin++;
            yiwin[2]++;
        }
        else if (j == 'J' && y == 'B') {
            jwin++;
            jiawin[1]++;
        }  
        else if (j == 'J' && y == 'C') {
            ywin++;
            yiwin[0]++;
        } 
        else if (j == 'B' && y == 'C') {
            jwin++;
            jiawin[2]++;
        }
        else if (j == 'B' && y == 'J') {
            ywin++;
            yiwin[1]++;
        }     
    }
    cout << jwin << " " << n - jwin - ywin << " " << ywin <<endl;
    cout << ywin << " " << n - jwin - ywin << " " << jwin <<endl;
    cout << Max(jiawin) << " " << Max(yiwin);
}