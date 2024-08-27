#include<stdio.h>
int main()
{
	int a,b,max = 1,num = 2,i,flag;
	long long sum;
	int prime[59998] = {2};
	while(scanf("%d %d",&a,&b) != EOF)
	{
		if(a > b){i = a;a = b;b = i;} 
		sum = flag = 0;
		if(b >= num)
		{
			for(;num <= b;num++)
			{
				for(i = 0;i < max;i++)
				{
					if(num % prime[i] == 0)
						break;
				}
				if(i == max)
					prime[max++] = num;
			}
		}
		for(i = 0;i < max;i++)
		{
			if(flag == 1)
			{
				if(prime[i] < b && b > 1)
					sum += prime[i];
				else
					break;
			}
			else
			{
				if(prime[i] > a || a < 2)
				{
					flag = 1;
					i--;
				}
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
