#include<stdio.h>
int main()
{
	int n;
	long long sum = 1;
	scanf("%d",&n);
	for(;n > 1;n--)
		sum = 2 * (sum + 1);
	printf("%lld",sum);
	return 0;
}
