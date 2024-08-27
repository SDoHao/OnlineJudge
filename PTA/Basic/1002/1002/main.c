#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_CN_Num(int num)
{
	switch (num)
	{
	    case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
	}
}

void print_Num(int num)
{
	int remain = num;
	if (num > 10)
	{
		remain = num % 10;
		print_Num(num / 10);
		printf(" ");
	}
	print_CN_Num(remain);
}

int main()
{
	char num[101];
	int i,sum = 0;
	int remain;
	scanf("%s", num);
	for (i = 0; num[i] != '\0'; i++)
	{
		sum = sum + num[i] - '0';
	}
	print_Num(sum);
	return 0;
}