#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,i,j;
	scanf("%d",&n);
	l = n * 2 - 1;
	for(i = 1;i <= l;i++)
	{
		for(j = 0;j < abs((i - n));j++)
			printf(" ");
		for(j = 0;j < l - abs(2 * (i - n));j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
