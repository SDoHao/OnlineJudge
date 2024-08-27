#include<stdio.h>
int main()
{
	int n,i,m,end,begin = 0;
	scanf("%d",&n);
	int array[n];
	for (i = 0;i < n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&m);
	begin = (begin - m + n) % n;
	end = (n - m - 1) % n;
	if (begin > end)
	{
		for(i = begin;i < n;i++)
			printf("%d ",array[i]);
		for(i = 0;i <= end;i++)
			printf("%d ",array[i]);	
	}
	else
		for(i = 0;i<n;i++)
			printf("%d ",array[i]);	
	return 0;
}
