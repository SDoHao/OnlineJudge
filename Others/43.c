#include<stdio.h>
int main()
{
	char str;
	int max = 90;
	while((str = getchar()) != '\n' && str != '\0' && max > 0)
	{
		if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
			printf("%c",str);
		max--;
	}
	//printf("\n");
	return 0; 
} 
