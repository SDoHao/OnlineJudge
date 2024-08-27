#include<stdio.h>
int main()
{
    int K,curmax=0,bigmax=0,h,start,end;
    scanf("%d",&K);
    int matrix[K];
    for(int i=0; i<K; i++)
    {
        scanf("%d",&matrix[i]);
    }
    start = 0;
    for(int i=0; i<K; i++)
    {
        curmax += matrix[i];
        if(curmax<0)
        {
            curmax=0;
            h=i+1;
        }
        else if(bigmax<curmax)
        {

            start=h;
            bigmax=curmax;
            end=i;
        }
        else if(bigmax=curmax)
        {
            if((end-start)>(i-h))
            {
                start=h;
                end=i;
            }
        }
    }
    printf("%d %d %d",bigmax,start,end);
    return 0;
}