#include<stdio.h>
int main()
{
	int n,j;
	long mill,one;
	while(scanf("%d",&n) != EOF)
	{
		one = 0;
		j = 1;
		mill = n * 100000;
		while(n--)
		{
			one = one + j;
			j = 2 * j;
		}
		printf("%ld %ld\n",one,mill);
	}
    return 0;
}
