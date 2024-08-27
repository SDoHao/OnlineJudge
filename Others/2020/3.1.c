#include<stdio.h>
#include<math.h>
int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int CountPrime(int n,int cp[])
{
	int i,count = 0;
	for(i = 0;prime[i] <= sqrt(n) + 1;i++)
	{
		while(n % prime[i] == 0)
		{
			count = i;
			cp[i]++;
			n  = n / prime[i];
		}	
	}
	if(n > 1)
	{
		for(i = 0;i <= n;i++)
		{
			if(n == prime[i])
			{
					count = i;
					cp[i]++;
					break;
			}
		}
	}
	return count;
}
int main()
{
	int n,i,k,max,temp;
	int cprime[25];
	while(scanf("%d",&n) != EOF)
	{
		for(k = 0;k <= 24;k++)
		cprime[k] = 0;
		max = 0;
		for(i = 2;i <= n;i++)
		{
			temp = CountPrime(i,cprime);
			max = temp < max?max:temp;
		}
		printf("%d!=",n);
		for(k = 0;k <= max;k++)
			printf(" %d",cprime[k]);
		printf("\n");
	}
    return 0;
}

