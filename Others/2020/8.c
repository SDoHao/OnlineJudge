#include<stdio.h>
#include<stdlib.h>
struct fruit
{
	char name[21];
	int price;
}allfruits[101];

int cmp(const void*a,const void*b)
{ 
	return ((struct fruit *)a)->price - ((struct fruit *)b)->price;
}

int main()
{
	int count;
	int data_count,i;
	scanf("%d%",&count);
	while(count--)
	{
		scanf("%d",&data_count);
		for(i = 0;i < data_count;i++)
		{
			scanf("%s %d",&allfruits[i].name,&allfruits[i].price);
		}
		qsort(allfruits,data_count,sizeof(allfruits[0]),cmp);
		for(i = 0;i < data_count;i++)
		{
			printf("%s %.d\n",allfruits[i].name,allfruits[i].price);
		}
	}
	return 0;
}
