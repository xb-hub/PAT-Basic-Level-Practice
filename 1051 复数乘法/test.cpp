#include <iostream>
#include <math.h>

using namespace std;

void tran(double r, double p, double &a, double &b)
{
    a = r * cos(p);
    b = r * sin(p);
}

int main()
{
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    double a1, b1, a2, b2;
    tran(r1, p1, a1, b1);
    tran(r2, p2, a2, b2);
    double a = a1 * a2 - b1 * b2;
    double b = a1 * b2 + a2 * b1;
    if(a > -0.005 && a < 0.005) a = 0;
    if(b > -0.005 && b < 0.005) b = 0;
    if(b < 0)
    {
        printf("%.2f-%.2fi", a, abs(b));
    }
    else
    {
        printf("%.2f+%.2fi", a, b);
    }
}