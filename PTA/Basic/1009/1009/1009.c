#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct EN_Words 
{
	char * c[20];

}EN_Words1[80];

int main()
{
	int i = 0,n;
	while (scanf("%s", EN_Words1[i++].c) != EOF)
		;
	for (n = i - 2; n >= 0; n--)//´Ó0µ½n - 1£¬¶øi = n + 1
	{
		printf("%s", EN_Words1[n].c);
		if(n != 0)
			printf(" ");
	}
	return 0;
}