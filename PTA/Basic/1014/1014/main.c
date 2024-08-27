#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void PrintWeek(int day)
{
	switch (day)
	{
	case 1:printf("MON "); break;
	case 2:printf("THE "); break;
	case 3:printf("WED "); break;
	case 4:printf("THE "); break;
	case 5:printf("FRI "); break;
	case 6:printf("SAT "); break;
	case 7:printf("SUN "); break;
	}
}
int main()
{
	char * line[4][61];
	int i = 0,n1 = 62,n2 = 62,index = 1;
	while (i < 4)
	{
		scanf("%s", &line[i]);
		i++;
	}
	for()

	return 0;
}