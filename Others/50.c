#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[81];
	char ch;
	int i,bool_int;
	gets(string);
	bool_int = 1;
	for(i = 0;i < strlen(string);i++)
	{
		ch = string[i];
		if(isdigit(ch))
		{
			printf("%c",ch);
			bool_int = 1;
		}
		else if(bool_int == 1)
		{
			bool_int = 0;
			printf("*");
		}	
	}
	return 0;
}
