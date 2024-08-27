//最大子串和
#include<stdio.h>
int main()
{
	int T,this_sum,max_sum,i,t;
	while(scanf("%d",&T) != EOF && T != 0)
	{
		this_sum = max_sum = 0;
		for(i = 0;i < T;i++)
		{
			scanf("%d",&t);
			this_sum += t;
			if(this_sum > max_sum)
				max_sum = this_sum;
			else if(this_sum < 0)
				this_sum = 0;
		}
		printf("%d\n",max_sum);
	}
	return 0;
} 
