#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    int m;
    while(scanf("%lf %d",&n,&m)!=EOF&&n<10000&&m<1000)
    {
        double i = 1,sqr = n,sum = sqr;
        while(i<m)
        {
            sqr=sqrt(sqr);
            sum+=sqr;
            i++;
        }
        printf("%.2lf\n",sum);
    }

    return 0;
}
