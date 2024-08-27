#include<stdio.h>
int main()
{
	int chick = 0,rabbit = 0;
	int total;
	int min,max;
	scanf("%d",&total);
	if (total % 2 == 0)
	{
		min = total / 4 + total % 4 / 2;
		max = total / 2;
	}
	else
	{
		min = 0;
		max = 0;
	}
	printf("%d %d",min,max);
	return 0;	
}
