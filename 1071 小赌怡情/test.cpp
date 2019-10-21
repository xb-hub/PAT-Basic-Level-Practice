#include <iostream>
using namespace std;

int main()
{
    int total, k;
    cin >> total >> k;
    int n1, t, b, n2;
    for(int i = 0; i < k; i++)
    {
        cin >> n1 >> b >> t >> n2;
        if(total < t)
        {
            cout << "Not enough tokens.  Total = " << total << "." << endl;
        }
        else
        {
            if(b == 0)
            {
                if(n1 > n2)
                {
                    total += t;
                    printf("Win %d!  Total = %d.\n", t, total);
                }
                else
                {
                    total -= t;
                    printf("Lose %d.  Total = %d.\n", t, total);
                    if(total == 0)
                    {
                        cout << "Game Over." << endl;
                        return 0;
                    }
                }
            }
            else if(b == 1)
            {
                if(n1 < n2)
                {
                    total += t;
                    printf("Win %d!  Total = %d.\n", t, total);
                }
                else
                {
                    total -= t;
                    printf("Lose %d.  Total = %d.\n", t, total);
                    if(total == 0)
                    {
                        cout << "Game Over." << endl;
                        return 0;
                    }
                }
            }
        }
    }
}