#include<stdio.h>
int main()
{
	long int n,m,i;
	while(scanf("%ld %ld",&n,&m) != EOF)
	{
		if(n == m)
		{
			printf("%d\n",1);
		}
		else if(n == 0)
			printf("%d\n",0);
		else
		{
			for(i = (n > m?m:n);i > 1;i--)
			{
				if(n % i == 0 && m % i == 0)
					break;
			}
			printf("%ld/%ld\n",n/i,m/i);
		}
	}
    return 0;
}

