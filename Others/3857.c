#include<stdio.h>
int main()
{
	int T,n,i,count,temp;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i = count = 0;i < n;i++)
		{
			scanf("%d",&temp);
			if(temp == 2)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
