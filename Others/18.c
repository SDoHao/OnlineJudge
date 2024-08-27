# include <stdio.h>
int main()
{
	int num,i,m;
	int sum;
	while(scanf("%d",&num)!=EOF)
	{
		sum = m = 0;
		for( i = 1;i <= num;i++ )
		{
			sum += m;
			if(i % 2 == 0)
				m++;
		}
		printf("%d\n",sum);	
	}
	return 0;
} 
