#include<stdio.h>
int main()
{
    int K,curmax=0,bigmax=0;
    scanf("%d",&K);
    int matrix[K];
    for(int i=0; i<K; i++)
    {
        scanf("%d",&matrix[i]);
    }
    for(int i=0; i<K; i++)
    {
        curmax += matrix[i];
        if(curmax<0)
        {
            curmax=0;
        }
        else if(bigmax<curmax)
            bigmax=curmax;
    }
    printf("%d",bigmax);
    return 0;
}
