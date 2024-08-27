#include<stdio.h>
int main()
{
	int n,i,sum;
	while(scanf("%d",&n) != EOF)
	{
		for(sum = 0,i = 1;i < n/2;i++)
			sum += i;
		printf("%d\n",2 * sum + (n % 2 ) * n / 2);
	}
	return 0;
}
