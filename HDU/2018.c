#include<stdio.h>
int main()
{
    int years;
    while(1)
    {
        int famel_cows=1,total_cows=0,age1=0,age2=0,age3=0,age4=0;
        scanf("%d",&years);
        if(years==0)
            break;
        else if(years<0||years>=55)
            continue;
        for(int i=1;i<years;i++)
        {
            //Äê³õ
            famel_cows+=age4;
            age4=age3;
            age3=age2;
            age2=age1;
            age1=famel_cows+age4;
            //printf("µÚ%dÄê %d %d %d %d %d\n",i,famel_cows,age4,age3,age2,age1);
        }
        total_cows=famel_cows+age1+age2+age3+age4;
        printf("%d\n",total_cows);
    }
    return 0;
}
