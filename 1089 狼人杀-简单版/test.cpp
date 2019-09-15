#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> mem(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> mem[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            vector<int> lie, a(n + 1, 1);
            a[i] = -1;  a[j] = -1;
            for(int k = 1; k <= n; k++)
            {
                if(mem[k] * a[abs(mem[k])] < 0)   lie.push_back(k);
            }
            if(lie.size() == 2 || a[lie[0]] + a[lie[1]] == 0)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
}