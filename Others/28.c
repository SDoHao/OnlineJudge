#include<stdio.h>
int main()
{
	int year;
	while(scanf("%d",&year) != EOF)
	{
		if((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0))
			printf("Leap Year\n");
		else
			printf("Not Leap Year\n");
	}
	return 0;
}
