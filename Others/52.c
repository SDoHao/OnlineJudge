#include<stdio.h>
#include <string.h>
int main()
{
	char str[101];
	int n,i;
	scanf("%[^\n]%*c", str);
	n = strlen(str);
	for (i = n - 1;i >= 0;i--)
		printf("%c",str[i]);
	return 0;	
}
