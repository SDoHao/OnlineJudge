#include<stdio.h>
int main()
{
	char str[100],ch;
	int i = 0,j = 0;
	scanf("%s",&str);
	while(1)
	{
		ch = str[j++];
		if(ch == 'Y')
			break;
		else if(ch == 'W')
			printf("Wednesday\n");
		else if(ch == 'M')
			printf("Monday\n");
		else if(ch == 'T')
		{
			ch = str[j];
			if(ch == 'u')
			{
				printf("Tuesday\n");
				j++;
			}
			else if(ch == 'h')
			{
				printf("Thursday\n");
				j++;
			}
			else
				printf("Wrong data\n");
		}
		else if(ch == 'S')
		{
			ch = str[j];
			if(ch == 'u')
			{
				printf("Sunday\n");
				j++;
			}
			else if(ch == 'a')
			{
				printf("Saturday\n");
				j++;
			}
			else
				printf("Wrong data\n");
		}
		else if(ch == 'F')	
			printf("Friday\n");
		else
			printf("Wrong data\n");
	}
	return 0;
}
