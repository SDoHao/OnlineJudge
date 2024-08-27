#include<stdio.h>
int main()
{
    int year,month,day,sum,i;
    int month_d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
    {
        sum=0;i=0;
        while(i<month-1)
        {
            sum=sum+month_d[i++];
        }
        sum+=day;
        if(((year%4==0&&year%100!=0)||year%400==0)&&month>2)
        {
            sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
