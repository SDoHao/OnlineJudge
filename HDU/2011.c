#include<stdio.h>
int main()
{
    int n,i=0,j_i,k;
    float sum=0,j_f;
    scanf("%d",&n);
    while(i<n)
    {
        j_f=1,j_i=0,sum=0;
        scanf("%d",&k);
        while(j_i<k)
        {
            sum+=1/j_f;
            j_i++;
            j_f++;
            if(j_i==k)break;
            sum-=1/j_f;
            j_i++;
            j_f++;
        }
        printf("%.2f\n",sum);
        i++;
    }
    return 0;
}
