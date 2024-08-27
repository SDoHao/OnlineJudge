#include<stdio.h>
int Is_prime(int n)
{
     int flag=0,i=2;
     for(;i<n;i++)
     {
        if(n%i==0)
            break;
     }
     if(i==n)
     {
        flag=1;
        //printf("%d is OK\n",n);
     }
     //else
        //printf("%d is Sorry\n",n);
     return flag;
}
int main()
{
     int x,y,flag;
     while(scanf("%d %d",&x,&y)!=EOF)
     {
        flag=1;
        if(x==0&&y==0)break;
        if(x>y)
        {
            int tmp=x;x=y;y=tmp;
        }
        if(x<-39||y>50||x==y)break;
        for(int i=x;i<=y;i++)
        {
            x=i*i+i+41;
            //printf("The value of the expression is equal to %d\n",x);
            if(Is_prime(x)&&flag==1)
                ;
            else
                flag=0;
        }
        if(flag)
            printf("OK\n");
        else
            printf("Sorry\n");
     }
     return 0;
}
