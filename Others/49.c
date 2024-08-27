#include<stdio.h>
int main()
{
	int i,n,min,max = 0;
	scanf("%d",&n);
	int array[n];
	for (i = 0;i < n;i++)
	{
		scanf("%d",&array[i]);
		if (array[i] > max)
		{
			max = array[i];
			min = i;
		}	
	}
	n--;
	i = array[n];
	array[n] = max;
	array[min] = i;
	min = array[0];
	for (i = 1;i <= n;i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			max = i;
		}	
	}
	i = array[0];
	array[0] = min;
	array[max] = i;
	for (i = 0;i < n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("%d",array[n]);
	return 0;	
}

