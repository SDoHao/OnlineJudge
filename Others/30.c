#include<stdio.h>
int main()
{
	int n,sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = n * (n + 1) / 2;
		printf("%d\n",sum);
	}
	return 0;
}
