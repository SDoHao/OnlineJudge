#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int exps[1000], coes[1000],i = 0,j;
	while (scanf("%d %d", &coes[i], &exps[i]) != EOF)
		i++;
	for (j = 0; j < i; j++)
	{
		coes[j] *= exps[j];
		exps[j]--;
	}
	j = 0;
	while (coes[j]!=0)
	{

		printf("%d %d", coes[j], exps[j]);
		j++;
		if (j != i)
			printf(" ");
	}
	return 0;
}