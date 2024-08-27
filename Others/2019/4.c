#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	int n,i = 0;
	gets(str);
	n = strlen(str);
	while(i < n)
	{
		if(isalpha(str[i]))
		{
			if(str[i] < 'Z')
				str[i] =  tolower(str[i]);
			else
			{
				str[i] =  toupper(str[i]);
			}
			printf("%c",str[i]);
		}
		else
			printf("%c",str[i]);
		i++;
	}
	return 0;
}
