#include<stdio.h>
int cmp(const void * a,const void * b)
{
	return (*(int *)a) - (*(int *)b);
}
int main()
{
	int i,array[10];
	for(i = 0;i < 10;i++)
		scanf("%d",&array[i]);
	qsort(array,10,sizeof(array[0]),cmp);
	for(i = 0;i < 10;i++)
		printf("%d\n",array[i]);
    return 0;
}

