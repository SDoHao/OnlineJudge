#include<stdio.h>
#include<string.h>
int main()
{
	char string[101];
	char _delete_char;
	char after[101];
	int i = 0,j = 0;
	scanf("%[^\n]%*c",&string);
	scanf("%c",&_delete_char);
	for(;i < strlen(string);i++)
		{
			if (string[i] != _delete_char)
			{
				after[j++] = string[i];
			}	
		}
	printf("%s\n",after);
	return 0;
}
