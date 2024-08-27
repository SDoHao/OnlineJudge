#include<stdio.h>
double average(int start,int n,int m)
{
    double sum;
    if((n-start)<(2*m)-2)
        m=n-start+1;
    double end=start+2*m-2;
    sum=(start+end)*m/2;
    return sum/m;
}
int main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        n*=2;
        scanf("%d",&m);
        printf("%.0lf",average(2,n,m));
        for(int start=2*m+2;start<=n;start+=2*m)
        {
           printf(" %.0lf",average(start,n,m));
        }
        printf("\n");
    }
    return 0;
}
