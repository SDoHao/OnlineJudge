#include<stdio.h>
#include<math.h>
int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97}; 
int main()
{
	int n,i,op = 0; 
	double sqrt_n;
	scanf("%d",&n);
	sqrt_n = sqrt(n);
	printf("%d=",n);
	for(i = 0;prime[i] <= sqrt_n;i++)
	{
		while(n % prime[i] == 0)
		{
			n = n / prime[i];
			if(op)
				printf("*");
			else
				op = 1;
			printf("%d",prime[i]);
		} 
	}
	if(n != 1)
	{
		if(op)printf("*");
		printf("%d",n);
	}
    return 0;
}
