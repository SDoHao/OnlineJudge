#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long n,i,a, b, c;
	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%ld %ld %ld", &a, &b,&c);
		i++;
		if (a + b > c)
			printf("Case #%d: true\n",i);
		else
			printf("Case #%d: false\n", i);
	}
	return 0;
}