#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int primes[10000],M,N,i,j,count = 1,st = 0;
	scanf("%d %d",&M,&N);
	primes[0] = 2;
	for (i = 3; i <= 10000; i++)
	{
		for (j = 0; j < count; j++)
		{
			if (i % primes[j] == 0)
				break;
		}
		if (j == count)
		{
			//if (i >= M)
				//st = count;
			primes[count++] = i;
			
		}
			
	}
	for (i = M - 1; i < N; i++) 
	{
		st++;
		printf("%d", primes[i]);
		if (st == 10)
		{
			st = 0;
			printf("\n");
		}
		else if(i < N - 1)
			printf(" ");
	}
	return 0;
}
