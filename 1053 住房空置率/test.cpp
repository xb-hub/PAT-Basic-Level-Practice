#include <iostream>

using namespace std;

int main()
{
    int n, d, k;
    int  empty = 0, p_empty = 0;
    double e, h_e;
    cin >> n >> e >> d;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> h_e;
            if(h_e < e) count++;
        }
        if(count > k / 2)
        {
            if(count > d)  empty++;
            else    p_empty++;
        }
    }
    // cout << (double)p_empty / n * 100 << "% " << (double)empty / n * 100 << "%" <<endl;
    printf("%.1f%% %.1f%%", (double)p_empty / n * 100, (double)empty / n * 100);
}