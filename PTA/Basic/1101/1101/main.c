#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[11], str2[11];
	int i,n,len;
	scanf("%s %d",&str1, &n);
	len = strlen(str1);
	for (i = 0; i < n; i++)
	{
		str2[i] = str1[len - n + i];
	}
	for (i = n; i < len; i++)
	{
		str2[i] = str1[i - n];
	}
	str2[len] = '\0';

	printf("%.2f", atoi(str2) / (1.0 * atoi(str1)));
	//printf("%s\n", str2);
	return 0;
}