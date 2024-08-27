#include<stdio.h>
int main()
{
	int i,j,prime[100],prime_num = 1;
	prime[0] = 2;
	for(i = 2;i <= 100;i++)
	{
		for(j = 0;j < prime_num;j++)
			if(i % prime[j] == 0)
				break;
		if(j == prime_num)
		{
			prime[prime_num++] = i;
		}	
	}
	for(i = 0;i < prime_num;i++)
	{
		printf("%d ",prime[i]);
		if((i + 1) % 5 == 0)
			printf("\n");
	}
	return 0;
}
