#include<stdio.h>
#include<stdlib.h>
double average_trim(double a[],int n)
{
    double sum=0,avg,max=a[0],min=a[0];
    for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
        }
    avg=(sum-max-min)/(n-2);
    return avg;
}
int main()
{
    double *a;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        a=malloc(sizeof(double)*n);
        for(int i=0;i<n;i++)
            scanf("%lf",&a[i]);
        //for(int i=0;i<n;i++)
            //printf("%d",a[i]);
        printf("%.2lf\n",average_trim(a,n));
    }
    return 0;
}
