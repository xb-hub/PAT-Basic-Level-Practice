#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, result;
    cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i / 2 + i / 3 + i / 5);
    cout << s.size();
}