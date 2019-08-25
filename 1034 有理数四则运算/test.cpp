#include <iostream>
#include <string>

using namespace std;

long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void compute(long long x, long long y)
{
    if(x * y == 0)
    {
        printf("%s", y == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((x > 0 && y < 0) || (x < 0 && y > 0));
    x = abs(x); y = abs(y);
    printf("%s", flag ? "(-" : "");
    if(x > y)
    {
        printf("%lld", x / y);
        x %= y;
        if(x != 0)
        {
            printf(" ");
        }
        else
        {
            if(flag)    printf(")");
            return;
        }
        
    }
    if (x == y)
    {
        printf("1");
        if(flag)
        {
            printf(")");
        }
        return;
    }
    long temp = gcd(x, y);
    x /= temp;   y /=temp;
    printf("%lld/%lld%s", x, y, flag ? ")" : "");
}

int main()
{
    long long a, b, c, d;
    scanf("%lld/%lld%lld/%lld", &a, &b, &c, &d);
    compute(a, b);  printf(" + ");    compute(c, d);  printf(" = ");    compute(a * d + b * c, b * d);   printf("\n");
    compute(a, b);  printf(" - ");    compute(c, d);  printf(" = ");    compute(a * d - b * c, b * d);   printf("\n");
    compute(a, b);  printf(" * ");    compute(c, d);  printf(" = ");    compute(a * c, b * d);   printf("\n");
    compute(a, b);  printf(" / ");    compute(c, d);  printf(" = ");    compute(a * d, b * c);   printf("\n");
}