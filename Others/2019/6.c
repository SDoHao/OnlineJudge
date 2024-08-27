#include<stdio.h>
int main()
{
	int i,j,N;
	scanf("%d",&N);
	int Matrix[N][N];
	for(i = 0;i < N;i++)
		for(j = 0;j < N;j++)
			 scanf("%d",&Matrix[i][j]);
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			printf("%d",Matrix[j][i]);
			if(j != N - 1)printf(" ");
		}	 
		printf("\n");
	}
	return 0;
}
