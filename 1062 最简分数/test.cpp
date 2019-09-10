#include <iostream>
#include <math.h>
using namespace std;

bool simple(int a, int b)
{
    if(b < a)
    {
        swap(b, a);
    }
    for(int i = 2; i <= a; i++)
    {
        if(b % i == 0 && a % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int a1, b1, a2, b2, m;
    bool flag = false;
    scanf("%d/%d %d/%d %d", &a1, &b1, &a2, &b2, &m);
    if(a1 * b2 > a2 * b1)
    {
        swap(a1, a2);
        swap(b1, b2);
    }
    int min_a = 0, max_a = 0;
    if((double)(a1 * m) / (double)b1 == a1 * m / b1)    min_a = a1 * m / b1 + 1;
    else    min_a = ceil((double)(a1 * m) / (double)b1);
    if((double)(a2 * m) / (double)b1 == a2 * m / b2)    max_a = a2 * m / b2 - 1;
    else    max_a = a2 * m / b2;
    for(int i = min_a; i <= max_a; i++)
    {
        if(simple(i, m))
        {
            if(flag)
            {
                printf(" ");
            }
            printf("%d/%d", i, m);
            if(!flag)   flag = true;
        }
    }
}