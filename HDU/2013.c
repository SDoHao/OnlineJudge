#include<stdio.h>
int main()
{
    int i,n,total_r,p_day;
    while(scanf("%d",&n)!=EOF)
    {
        total_r=1;
        p_day=3;
        i=1;
        while(i<n)
        {
            total_r=total_r+p_day;
            p_day=p_day*2;
            i++;
        }
        printf("%d\n",total_r);
    }
    return 0;
}
