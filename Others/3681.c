#include<stdio.h>
struct phone
{
	char name[20];
	float q;//price
	float p;
	float rate;
}phone_array[100];

int cmp(const void * a,const void * b)
{
	return (*(struct phone *)b).rate > ((struct phone *)a)->rate ? 1:-1;
}

int main()
{
	int count,data_count,i;
	scanf("%d",&count);
	while(count--)
	{
		scanf("%d",&data_count);
		for(i = 0;i < data_count;i++)
		{
			scanf("%s %f %f",&phone_array[i].name,&phone_array[i].p,&phone_array[i].q);
			phone_array[i].rate = phone_array[i].p / phone_array[i].q;
		}
		qsort(phone_array,data_count,sizeof(phone_array[0]),cmp);
		for(i = 0;i < data_count;i++)
		{
			printf("%d %s %.0f %.0f\n",i + 1,phone_array[i].name,phone_array[i].p,phone_array[i].q);
		}
	}
	return 0;
}
