#include<stdio.h>
int PathMax(int a[],int i,int level,int n)
{
	int left,right;
	if(level == n)
		return a[i];
	else
	{
		left = PathMax(a,i + level,level + 1,n);
		right = PathMax(a,i + level + 1,level + 1,n);
	}	
	return (left > right?left:right) + a[i];
}

int main()
{
	int T,array[1000],n,i,j,count;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(count = 0,i = 1;i <= n;i++)
			for(j = 0;j < i;j++)
				scanf("%d",&array[++count]);
		printf("%d\n",PathMax(array,1,1,n));
	}
    return 0;
}

