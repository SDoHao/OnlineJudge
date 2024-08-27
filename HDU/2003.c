#include<stdio.h>
int main()
{
    double D;
    while(scanf("%lf",&D)!=EOF)
    {

        printf("%.2lf\n",D>=0?D:-D);
    }
    return 0;
}
