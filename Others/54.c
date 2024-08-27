#include<stdio.h>
int main()
{
	char ch = getchar();
	printf("%c",ch);
	while((ch = getchar()) != EOF)
		printf(" %c",ch);
	return 0;
}
