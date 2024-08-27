#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int primes[10000], n, i, k, num,count;
	count = 0;
	primes[0] = 2;
	num = 1;
	scanf("%d", &k);
	for (n = 3; n <= k; n++)
	{
		for (i = 0; i < num; i++)
			if (n % (primes[i]) == 0)
				break;
		if (i == num)
			primes[num++] = n;
	}
	for (i = 0; i < num; i++)
		if (primes[i + 1] - primes[i] == 2)
			count++;
    printf("%d", count);
	return 0;
}