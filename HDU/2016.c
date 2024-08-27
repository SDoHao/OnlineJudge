#include<stdio.h>
#include<stdlib.h>
void exchange(int a[],int n)
{
    int min=a[0],pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }
    //printf("min=%d pos=%d\n",min,pos);
//    for(int i=pos;i>0;i--)
//    {
//        a[i]=a[i-1];
//    }
//    a[0]=min;
      a[pos]=a[0];
      a[0]=min;
}
void print(int a[],int n)
{
    printf("%d",a[0]);
    for(int i=1;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    int *arr;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        arr=malloc(sizeof(int)*n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        exchange(arr,n);
        print(arr,n);
    }
    return 0;
}
