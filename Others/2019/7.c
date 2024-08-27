#include<stdio.h>
int main()
{
	int n,i,a,b,sum = 0;
	scanf("%d",&n);
	int tree[n];
	for(i = 0;i < n;i++)
		tree[i] = 1;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		for(i = a - 1;i < b;i++)
			tree[i] = 0;	
	}
	for(i = 0;i < n;i++)
		if(tree[i])sum++;
	printf("%d",sum);
	return 0;	
}
