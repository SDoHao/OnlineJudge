#include<stdio.h>
#include<string.h>
int main()
{
	char boy[21],girl[21];
	char boy_e,girl_e;
	int len,sum;
	while(scanf("%s %s",&boy,&girl) != EOF)
	{
		if(strcmp(boy,"0") == 0 && strcmp(girl,"0") == 0)
			break;
		boy_e = boy[strlen(boy) - 1];
		girl_e = girl[strlen(girl) - 1];
		sum = (int)(boy_e + girl_e - 'a' - 'a');
		if(sum > 25)
			sum -= 26;
		while(sum >= 10)
			sum -= 10;
		if (sum % 2 == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;	
}
