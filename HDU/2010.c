//Always Presentation Error, use the array and finally output!!!
#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    while(scanf("%d %d",&m,&n)!=EOF&&100<=m&&m<=n&&n<=999)
    {
        int i=0,abc,flag[999];double a,b,c;
        for(abc=m;abc<=n;abc++)
        {
            a=abc/100;
            b=abc/10%10;
            c=abc%10;
            if(abc==pow(a,3)+(b*b*b)+(c*c*c))
            {
                flag[i++]=abc;
            }
        }
        if(i==0){printf("no");}
        else
        {
            printf("%d",flag[0]);
            for(int j=1;j<i;j++)
            {
                printf(" %d",flag[j]);
            }
        }
        printf("\n");
    }
}
