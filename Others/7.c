#include<stdio.h>
int main()
{
	int T,n,m,i,k;
	int trans[100001];
	scanf("%d%*c",&T);
	while(T--)
	{
		for(i = 1;i < 100001;i++)
			trans[i] = -1;
		scanf("%d",&n);
		for(i = 0;i < n;i++)
		{
			scanf("%d=%d",&m,&k);
			trans[m] = k;
			trans[k] = m;
		}
		scanf("%d",&m);
		for(i = 0;i < m;i++)
		{
			scanf("%d",&k);
			if(trans[k] > 0)
				printf("%d\n",trans[k]);
			else
				printf("UNKNOW\n");
		}
		printf("\n");
	}	
	return 0; 
}
