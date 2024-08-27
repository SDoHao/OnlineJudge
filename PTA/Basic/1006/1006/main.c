#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,nB,nS,i;
	scanf("%d", &n);
	nB = n / 100;
	nS = (n - nB * 100 )/ 10;
	for (i = 0; i < nB; i++)
		printf("B");
	for (i = 0; i < nS; i++)
		printf("S");
	for (i = 1; i <= n % 10; i++)
		printf("%d",i);
	return 0;
}