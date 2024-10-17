#include <iostream>
#include <cmath>
using namespace std;

double cal(double xn)
{
    return xn * xn * xn;
}

double Newton(double xn,double y)
{
    return xn - xn / 3 + y / (3 * xn * xn);
}

int main() 
{
    double y;
    double xn = 1;
    cin >> y;
    while(abs(cal(xn) - y) > 1e-3)
    {
        xn = Newton(xn, y);
    }
    printf("%.1f",xn);

    // double l,r,mid;
    // double n;
    // while (cin >> n) 
    // { 
    //     l = -20,r = 20;
    //     while(r - l > 1e-3)
    //     {
    //         mid = (l + r) / 2;
    //         if(mid * mid * mid > n)
    //             r = mid;
    //         else
    //             l = mid;
    //     }
    //     printf("%.1f",l);
    // }
    return 0;
}
