#include <iostream>
#define MaxSize 100001
using namespace std;
int main() {
    int n, soc, k, find[MaxSize], i;
    int hash[MaxSize] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> soc;
        hash[soc]++;
    }
    cin >> k;
    for (i = 0; i < k; i++)
        cin >> find[i];
    for (i = 0; i < k-1; i++){
        cout << hash[find[i]] << " ";
    }
    cout << hash[find[i]];
}