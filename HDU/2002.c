#include<stdio.h>
#define PI 3.1415927
int main()
{
    double R,Volume;
    while(scanf("%lf",&R)!=EOF)
    {
        Volume=R*R*R*PI*4/3;
        printf("%.3lf\n",Volume);
    }
    return 0;
}
