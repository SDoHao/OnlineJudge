#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<n)
     {
        int AH,AM,AS,BH,BM,BS;
        scanf("%d %d %d %d %d %d",&AH,&AM,&AS,&BH,&BM,&BS);
        AS+=BS;
        while(AS>59)
        {
            AM++;
            AS-=60;
        }
        AM+=BM;
        while(AM>59)
        {
            AH++;
            AM-=60;
        }
        i++;
        AH+=BH;
        printf("%d %d %d\n",AH,AM,AS);
     }
    return 0;
}
